#include <stdio.h>
#include <math.h>

#define N 100000

int main()
{
    int i;
    for (i = 0; i <= N; i++)
    {
        int n = 1;
        int tmp = i;
        int sum = 0;
        while (tmp /= 10)
        {
            n++;
        }
        tmp = i;
        while (tmp)
        {
            sum += pow(tmp % 10, n);
            tmp /= 10;
        }
        if (i == sum)
        {
            printf("%d ", i);
        }
    }
    return 0;
}