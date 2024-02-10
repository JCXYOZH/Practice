/* 取一个整数 a 从右端开始的 4～7 位。*/

/* 先使 a 右移 4 位。
设置一个低 4 位全为 1，其余全为 0 的数，可用~(~0<<4)
将上面二者进行 & 运算。*/


#include <stdio.h>

int main()
{
    unsigned a, b, c, d;
    scanf("%o", &a);
    b = a >> 4;
    c = ~(~0 << 4);
    d = b & c;
    printf("%o\n", d);
    return 0;
}