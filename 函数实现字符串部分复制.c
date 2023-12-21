/*本题要求编写函数，将输入字符串t中从第m个字符开始的全部字符复制到字符串s中。

函数接口定义：

void strmcpy( char *t, int m, char *s );

函数strmcpy将输入字符串char *t中从第m个字符开始的全部字符复制到字符串char *s中。
若m超过输入字符串的长度，则结果字符串应为空串。

输入样例：

7

happy new year

输出样例：

new year */


#include <stdio.h>
#include <string.h>
#define MAXN 20

void ReadString(char s[]); //由裁判实现，略去不表
void strmcpy(char *t, int m, char *s)
{
    int i = 0;
    if (m > strlen(t))
    {
        *s = NULL;
    }
    else
    {
        m = m - 1;
        while (t[m] != '\0')
        {
            s[i++] = t[m];
            m++;
        }
        s[i] = '\0';
    }
}

int main()
{
    char t[MAXN], s[MAXN];
    int m;
    scanf("%d", &m);
    ReadString(t);
    strmcpy(t, m, s);
    printf("%s", s);
    return 0;
}