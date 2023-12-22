/*本题要求实现一个删除字符串中的指定字符的简单函数。

函数接口定义：

void delchar( char *str, char c );

其中char *str是传入的字符串，c是待删除的字符。
函数delchar的功能是将字符串str中出现的所有c字符删除。

输入样例：

a

happy new year

输出样例：

hppy new yer */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXN 20

void delchar(char *str, char c)
{
    int len = strlen(str);
    /*在这段代码中，malloc()函数用于动态分配内存，在这里用来创建一个长度为len的字符数组。
     * 为了确保分配的内存能够存储字符，将sizeof(char)乘以len作为参数传递给malloc()函数。
     * 最后，将malloc()函数返回的指针进行强制类型转换为char*类型，并赋给strTemp变量。*/
    char *strTemp = (char*)malloc(sizeof(char)*len);
    int i = 0;
    int t = 0;
    while (str[i] != '\0')
    {
        if (str[i] != c)
        {
            strTemp[t++] = str[i];
            i++;
        }
    }
    strTemp[t] = '\0';
    for (int i = 0; i <= t; i++)
    {
        str[i] = strTemp[i];
    }
}

int main()
{
    char str[MAXN], c;
    scanf("%c", &c);
    delchar(str, c);
    printf("%s", str);
    return 0;
}