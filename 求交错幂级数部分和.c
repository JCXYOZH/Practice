/*本题要求实现一个函数，计算下列简单交错幂级数的部分和：

f(x,n)=x−x2+x3-x4+...+(-1)n-1*xn

函数接口定义：

double fn( double x, int n );

其中题目保证传入的n是正整数，并且输入输出都在双精度范围内。函数fn应返回上述级数的部分和。建议尝试用递归实现。

输入样例：

0.5 12

输出样例：

0.33 */


#include <stdio.h>
#include <math.h>

double fn(double x, int n)
{
    if (n == 1)
        return x;
    else
        return pow(-1, n - 1) * pow(x, n) + fn(x, n - 1);
}

int main()
{
    double x;
    int n;
    scanf("%lf %d", &x, &n);
    printf("%.2f", fn(x, n));
    return 0;
}