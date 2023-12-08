/*
 * 本题目要求编写程序统计一行字符中单词的个数。所谓“单词”是指连续不含空格的字符串，各单词之间用空格分隔，空格数可以是多个。

输入格式:

输入给出一行字符。

输出格式:

在一行中输出单词个数。

输入样例:

Let's go to room 209.

输出样例:

5
 */


#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    gets(str);
    int i, j;
    int len = strlen(str);
    j = len - 1;

    while (str[i] == ' ')
    {
        i++;
    }
    while (str[j] == ' ')
    {
        j--;
    }
    if (i == len && j < 0)
    {
        printf("0\n");
    }
    else
    {
        int n1 = i;
        int n2 = j;
        int temp = 0;
        for (i = n1 + 1; i <= n2; i++)
        {
            if (str[i] == ' ' && str[i - 1] != ' ')
            {
                temp++;
            }
        }
        printf("%d\n", temp + 1);
    }
    return 0;
}