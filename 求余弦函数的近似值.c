/*
 * 本题要求实现一个函数，用下列公式求cos(x)的近似值，
 * 精确到最后一项的绝对值小于e：cos(x)=x^0/0!−x^2/2!+x^4/4!−x^6/6+...

函数接口定义：

double funcos( double e, double x );

其中用户传入的参数为误差上限e和自变量x；
 函数funcos应返回用给定公式计算出来、并且满足误差要求的cos(x)的近似值。
 输入输出均在双精度范围内。

 输入样例：

0.01 -3.14

输出样例：

cos(-3.14) = -0.999899

*/


#include <stdio.h>
#include <math.h>

double funcos(double e, double x)
{
    int i, j;
    int l = 1;
    double sum = 0.0;
    double temp, temp1, temp2;
    for (i = 0; ; i += 2)
    {
        if (i == 0)
        {
            temp = 1.0;
        }
        else
        {
            temp1 = 1.0;
            temp2 = 1.0;
            for (j = 1; j <= i; j++)
            {
                temp1 *= x;
                temp2 *= j;
            }
            temp = temp1 / temp2;
        }
        sum += (temp * l);
        if (temp < e)
            break;
        l = - l;
    }
    return sum;
}

int main()
{
    double e, x;
    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f", x, funcos(e, x));
    return 0;
}