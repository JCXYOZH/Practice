/* 一个偶数总能表示为两个素数之和。*/


#include <stdio.h>
#include <math.h>

int Isprimer(unsigned int n)
{
    int i;
    if (n < 4)
        return 1;
    else if (n % 2 == 0)
        return 0;
    else
        for (i = 3; i < sqrt(n) + 1; i++)
            if (n % i == 0)
                return 0;
    return 1;
}

int main()
{
    unsigned int n, i;
    do
    {
        scanf("%d", &n);
    } while (n % 2 != 0);
    for (i = 1; i < n; i++)
        if (Isprimer(i) && Isprimer(n - i))
            break;
    printf("%d = %d + %d\n", n, i, n - i);
    return 0;
}