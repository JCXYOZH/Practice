/*本题要求编写函数，判断给定的一串字符是否为“回文”。所谓“回文”是指顺读和倒读都一样的字符串。

如“XYZYX”和“xyzzyx”都是回文。

函数接口定义：

bool palindrome( char *s );

函数palindrome判断输入字符串char *s是否为回文。若是则返回 true ，否则返回 false 。

输入样例1：

thisistrueurtsisiht

输出样例1：

Yes

输入样例2：

thisisnottrue

输出样例2：

No */


#include <stdio.h>
#include <string.h>

#define MAXN 20

typedef enum {false, true} bool;

bool palindrome(char *s)
{
    int l = 1;
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - 1 - i])
        {
            return 0;
            break;
        }
    }
    if (l == 1)
        return true;
    else
        return false;
}

int main()
{
    char s[MAXN];
    scanf("%s", &s);
    if (palindrome(s) == true)
        printf("YES");
    else
        printf("NO");
    return 0;
}