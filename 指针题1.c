#include <stdio.h>

int main()
{
    unsigned long pulArray[] = {6, 7, 8, 9, 10};
    unsigned long *pulPtr;
    pulPtr = pulArray;
    *(pulPtr + 3) += 3; //将指针pulPtr指向的地址的第3个元素（即数组中的第4个元素）的值加3
    //打印指针pulPtr指向的地址的值（即数组的第一个元素）和指针pulPtr指向的地址的第3个元素的值（即数组的第4个元素）
    printf("%d %d\n", *pulPtr, *(pulPtr + 3));
    return 0;
}