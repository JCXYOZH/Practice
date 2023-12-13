/*
 * 上三角矩阵指主对角线以下的元素都为0的矩阵；主对角线为从矩阵的左上角至右下角的连线。

本题要求编写程序，判断一个给定的方阵是否上三角矩阵。

输入格式：

输入第一行给出一个正整数T，为待测矩阵的个数。接下来给出T个矩阵的信息：每个矩阵信息的第一行给出一个不超过10的正整数n。随后n行，每行给出n个整数，其间以空格分隔。

输出格式：

每个矩阵的判断结果占一行。如果输入的矩阵是上三角矩阵，输出“YES”，否则输出“NO”。

输入样例：

2

3

1 2 3

0 4 5

0 0 6

2

1 0

-8 2

输出样例：

YES

NO
 */


#include <stdio.h>

int fun(int arr[][11], int n)
{
    int i, j;
    int l = 1;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i][j] != 0)
            {
                l = 0;
                break;
            }
        }
        if (l == 0)
        {
            break;
        }
    }
    return l;
}

int main()
{
    int T, n, i, j, t;
    int arr[11][11], temp[11];
    int k = 0;
    scanf("%d", &T);
    for (t = 1; t <= T; t++)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
        int t = fun(&arr, n);
        temp[k++] = t;
    }
    for (i = 0; i < k; i++)
    {
        if (temp[i] == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}