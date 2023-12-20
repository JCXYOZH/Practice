/*本题要求实现函数，可以根据下表查找到星期，返回对应的序号。

序号	星期
0	Sunday
1	Monday
2	Tuesday
3	Wednesday
4	Thursday
5	Friday
6	Saturday
函数接口定义：

int getindex( char *s );

函数 getindex 应返回字符串 s 序号。
如果传入的参数 s 不是一个代表星期的字符串，则返回-1。

输入样例1：

Tuesday

输出样例1：

2

输入样例2：

today

输出样例2：

wrong input! */


#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex(char *s)
{
    int i;
    int l = -1;
    char str[8][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for (i = 0; i < 7; i++)
    {
        if (strcmp(s, str[i]) == 0)
        {
            l = 1;
            break;
        }
    }
    if (l == 1)
        return i;
    else
        return l;
}

int main()
{
    char s[MAXS];
    scanf("%s", s);
    if (getindex(s) == -1)
    {
        printf("wrong input!");
    }
    else
    {
        printf("%d", getindex(s));
    }
    return 0;
}