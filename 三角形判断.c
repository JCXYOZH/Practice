/* 给定平面上任意三个点的坐标，检验它们能否构成三角形。

输入格式:

输入在一行中顺序给出六个[−100,100]范围内的数字，即三个点的坐标 x1、y1、x2、y2、x3、y3。

输出格式:

若这3个点不能构成三角形，则在一行中输出“Impossible”；若可以，则在一行中输出该三角形的周长和面积，格式为“L = 周长, A = 面积”，输出到小数点后2位。

输入样例1:

4 5 6 9 7 8

输出样例1:

L = 10.13, A = 3.00

输入样例2:

4 6 8 12 12 18

输出样例2:

Impossible */

#include <stdio.h>
#include <math.h>

double fun(double x1, double y1, double x2, double y2)
{
    double temp1 = x1 - x2;
    double temp2 = y1 - y2;
    return sqrt(temp1 * temp1 + temp2 * temp2);
}

int main()
{
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    double l1 = fun(x1, y1, x2, y2);
    double l2 = fun(x2, y2, x3, y3);
    double l3 = fun(x3, y3, x1, y1);
    if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1)
    {
        double p = (l1 + l2 + l3) / 2.0;
        double A = sqrt(p * (p - l1) * (p - l2) * (p - l3)); //海伦公式
        printf("L = %.2lf, A = %.2lf\n", l1 + l2 + l3, A);
    }
    else
    {
        printf("Impossible");
    }
    return 0;
}