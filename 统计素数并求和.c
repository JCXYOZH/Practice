/*
 * 本题要求统计给定整数M和N区间内素数的个数并对它们求和。

输入格式:

输入在一行中给出两个正整数M和N（1≤M≤N≤500）。

输出格式:

在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。

输入样例:

10 31

输出样例:

7 143
 */


#include <stdio.h>
#include <math.h>

int fun(int n)
{
    int temp = 1;
    int t = sqrt(n);
    for (int i = 2; i <= t; i++)
    {
        if (n % i == 0)
        {
            temp = 0;
            break;
        }
    }
    return temp;
}

int main()
{
    int M, N;
    int sum, count= 0;
    scanf("%d %d", &M, &N);
    if (M < 2)
        M = 2;
    for (int i = M; i <= N; i++)
    {
        int temp = fun(i);
        if (temp == 1)
        {
            sum += i;
            count++;
        }
    }
    printf("%d %d", count, sum);
    return 0;
}