/* 输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。*/


#include <stdio.h>

void fun(int *s, int n)
{
    int i;
    int max = s[0];
    int a = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i] > max)
        {
            max = s[i];
            a = i;
        }
    }
    s[a] = s[0];
    s[0] = max;
    int j;
    int min = s[n - 1];
    int b = n - 1;
    for (j = 0; j < n; j++)
    {
        if (s[j] < min)
        {
            min = s[j];
            b = j;
        }
    }
    s[b] = s[n - 1];
    s[n - 1] = min;
}

void printf__s(int *s, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", s[i]);
    printf("\n");
}

int main()
{
    int s[20];
    int i, n;
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++)
        scanf("%d", &s[i]);
    fun(s,n);
    printf__s(s,n);
    return 0;
}