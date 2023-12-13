/*
本题要求实现一个拆分实数的整数与小数部分的简单函数。

函数接口定义：

void splitfloat( float x, int *intpart, float *fracpart );

其中x是被拆分的实数（0≤x<10000），intpart和fracpart分别是将实数x拆分出来的整数部分与小数部分。

输入样例：

2.718

输出样例：

The integer part is 2

The fractional part is 0.718
*/

#include <stdio.h>

void splitfloat(float x, int *intpart, float *fracpart)
{
    *intpart = (int)x;
    *fracpart = x - (int)x;
}

int main()
{
    int intpart;
    float x, fracpart;
    scanf("%f", &x);
    splitfloat(x, &intpart, &fracpart);
    printf("The integer part is %d\n", intpart);
    /* 格式说明符%g是%f和%e的简写，用于浮点数格式化输出，
     * 会根据情况自动选择%f或%e进行输出。
     * 当浮点数的小数部分大于等于5位时，会使用科学计数法（%e）进行输出；
     * 当浮点数的小数部分小于5位时，会使用固定点表示法（%f）进行输出。
     * 可以方便地控制浮点数的输出格式，使其既不显得过于冗长，又能准确地表示浮点数的值。*/
    printf("The fractional part is %g\n", fracpart);
    return 0;
}