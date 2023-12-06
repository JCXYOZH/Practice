/*
 * 水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。例如：153=。本题要求编写程序,计算所有N位水仙花数。

输入格式:

输入在一行中给出一个正整数N（3≤N≤7）。

输出格式:

按递增顺序输出所有N位水仙花数，每个数字占一行。

输入样例:

3

输出样例:

153

370

371

407
 */


#include <stdio.h>


/*这个函数的目的是找出N位数的最小和最大值。
例如，对于N=3，最小值是100，最大值是999。
通过计算（10^(N-1)）和（10^N - 1）来找到这两个数，
并将它们分别赋值给指针m和n所指向的变量。*/
void fun1(int *m, int *n, int N)
{
    int i, t1, t2 = 1;
    for (i = 1; i <= N - 1; i++)
    {
        t1 *= 10;
    }
    for (i = 1; i <= N; i++)
    {
        t2 *= 10;
    }
    *m = t1;
    *n = t2 - 1;
}

int fun2(int n, int N)
{
    int t;
    int sum = 0;
    int M = n;
    while (n) //当数字不为0时，执行循环。
    {
        t = 1;
        int temp = n % 10; //取数字的最后一位。
        for (int i = 1; i <= N; i++) //对于每个数字的最后一位，都将这个位数的N次幂乘以临时变量t。
        {
            t *= temp;
        }
        sum += t;
        n /= 10; //去掉数字的最后一位。
    }
    if (sum == M)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    int m, n;
    fun1(&m, &n, N);
    for (int i = m; i <= n; i++)
    {
        int temp = fun2(i, N);
        if (temp == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}