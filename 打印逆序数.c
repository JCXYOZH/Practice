/*
 * 本题要求实现一个求整数的逆序数的简单函数。

函数接口定义：

int reverse( int number );

其中函数reverse须返回用户传入的整型number的逆序数。

 输入样例：

-12340

输出样例：

-4321 */


#include <stdio.h>

int reverse(int number)
{
    int l;
    if (number < 0)
    {
        l = -1;
        number = -number;
    }
    int temp;
    int sum = 0;
    while (number)
    {
        temp = number % 10;
        sum = sum * 10 + temp;
        number /= 10;
    }
    return sum *= l;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", reverse(n));
    return 0;
}