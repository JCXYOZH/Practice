/*本题要求实现一个计算复数之积的简单函数。

函数接口定义：

struct complex multiply(struct complex x, struct complex y);

其中 struct complex 是复数结构体，其定义如下：

struct complex{
    int real;
    int imag;
};

输入样例：

3 4 5 6

输出样例：

(3+4i) * (5+6i) = -9 + 38i */


#include <stdio.h>

//定义一个名为 complex的结构体，该结构体包含两个成员变量，分别是实部（real）和虚部（imag）
struct complex{
    int real;
    int imag;
};

// 名为 multiply的函数，用于计算两个复数相乘的结果
struct complex multiply(struct complex x, struct complex y)
{
    struct complex t; //声明一个名为t的复数结构体变量
    t.real = x.real * y.real - x.imag * y.imag; //计算乘积的实部
    t.imag = x.real * y.imag + y.real * x.imag; // 计算乘积的虚部
    return t;
};

int main()
{
    struct complex product, x, y; //声明三个复数结构体变量，分别用于存储乘积结果和两个待相乘的复数
    scanf("%d %d %d %d", &x.real, &x.imag, &y.real, &y.imag); //从标准输入中读取四个整数，分别赋值给两个复数的实部和虚部
    product = multiply(x, y); //调用 multiply函数计算两个复数的乘积，并将结果赋给 product
    printf("(%d + %di) * (%d + %di) = %d + %di", x.real, x.imag, y.real, y.imag, product.real, product.imag);
    return 0;
}