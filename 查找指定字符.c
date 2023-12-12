/*
 * 本题要求编写程序，从给定字符串中查找某指定的字符。

输入格式：

输入的第一行是一个待查找的字符。第二行是一个以回车结束的非空字符串（不超过80个字符）。

输出格式：

如果找到，在一行内按照格式“index = 下标”输出该字符在字符串中所对应的最大下标（下标从0开始）；否则输出"Not Found"。

输入样例1：

m programming

输出样例1：

index = 7

输入样例2：

a 1234

输出样例2：

Not Found */


#include <stdio.h>
#include <string.h>

int main()
{
    char c;
    char str[81];
    scanf("%c", &c);
    getchar();
    gets(str);
    int len = strlen(str);
    int i;
    int l = 0;
    for (i = len - 1; i >= 0; i--)
    {
        if (str[i] == c)
        {
            l = 1;
            break;
        }
    }
    if (l == 0)
        printf("Not Found\n");
    else
        printf("index = %d\n",i);
    return 0;
}