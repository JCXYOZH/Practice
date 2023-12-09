/*
 * 本题要求实现一个计算Fibonacci数的简单函数，
 * 并利用其实现另一个函数，输出两正整数m和n（0<m≤n≤10000）之间的所有Fibonacci数。
 * 所谓Fibonacci数列就是满足任一项数字是前两项的和（最开始两项均定义为1）的数列。

函数接口定义：

int fib( int n );

void PrintFN( int m, int n );

其中函数fib须返回第n项Fibonacci数；
 函数PrintFN要在一行中输出给定范围[m, n]内的所有Fibonacci数，
 相邻数字间有一个空格，行末不得有多余空格。
 如果给定区间内没有Fibonacci数，则输出一行“No Fibonacci number”。

 输入样例1：

20 100 7

输出样例1：

fib(7) = 13

21 34 55 89

输入样例2：

2000 2500 8

输出样例2：

fib(8) = 21

No Fibonacci number */


#include <stdio.h>

int fib(int n)
{
    int a = 1;
    int b = 1;
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        int c;
        int temp = 2;
        while (1)
        {
            c = a + b;
            temp++;
            a = b;
            b = c;
            if (temp >= n)
            {
                break;
            }
        }
        return c;
    }
}

void PrintFN(int m, int n)
{
    int i;
    int arr[100];
    int tt = 0;
    for (i = 1; ; i++)
    {
        int temp = fib(i);
        if (temp >= m && temp <= n)
        {
            arr[tt++] = temp;
        }
        if (temp > n)
        {
            break;
        }
    }
    if (tt == 0)
    {
        printf("No Fibonacci number\n");
    }
    else
    {
        for (i = 0; i < tt; i++)
        {
            if (i == tt - 1)
            {
                printf("%d\n", arr[i]);
            }
            else
            {
                printf("%d ", arr[i]);
            }
        }
    }
}

int main()
{
    int m, n, t;
    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);
    return 0;
}