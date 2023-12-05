/*
已知函数  可以展开为幂级数 。现给定一个实数x，要求利用此幂级数部分和求  的近似值，求和一直继续到最后一项的绝对值小于0.00001。

输入格式:

输入在一行中给出一个实数x∈[0,5]。

输出格式:

在一行中输出满足条件的幂级数部分和，保留小数点后四位。

输入样例:

1.2

输出样例:

3.3201
*/


#include <stdio.h>

double fun(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * fun(n - 1);
}

int main()
{
    double n;
    scanf("%lf", &n);
    double n1 = n;
    double sum = 1.0;
    for (int i = 1; ; i++)
    {
        double t = n1 / fun(i);
        sum += t;
        n1 *= n;
        if (t < 0.00001)
            break;
    }
    printf("%.4lf", sum);
    return 0;
}