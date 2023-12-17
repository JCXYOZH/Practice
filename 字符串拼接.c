/*键盘输入两个字符串，将这两个字符串进行拼接后输出。

输入描述:

键盘输入两个字符串

输出描述:

输出两个字符串拼接后的结果

示例1

输入

hello
nihao

输出

hellonihao */


#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    // 从用户输入中读取一行字符串，并将其存储在变量a中，sizeof(a)用于获取a数组的大小
    fgets(a, sizeof(a), stdin);
    // 读取另一行字符串，并存储在b中
    fgets(b, sizeof(b), stdin);
    /*使用strcspn函数找到字符串a中的换行符，并将其替换为空字符'\0'，从而删除换行符*/
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';
    printf("%s%s", a, b);
    return 0;
}