/*
 * 一个矩阵元素的“鞍点”是指该位置上的元素值在该行上最大、在该列上最小。

本题要求编写程序，求一个给定的n阶方阵的鞍点。

输入格式：

输入第一行给出一个正整数n（1≤n≤6）。随后n行，每行给出n个整数，其间以空格分隔。

输出格式：

输出在一行中按照“行下标 列下标”（下标从0开始）的格式输出鞍点的位置。如果鞍点不存在，则输出“NONE”。题目保证给出的矩阵至多存在一个鞍点。

输入样例1：

4

1 7 4 1

4 8 3 6

1 6 1 2

0 7 8 9

输出样例1：

2 1

输入样例2：

2

1 7

4 1

输出样例2：

NONE
 */


#include <stdio.h>

int fun1(int arr[][7], int i, int n)
{
    int j;
    int index = 0;
    for (j = 1; j < n; j++)
    {
        if (arr[i][j] >= arr[i][index])
        {
            index = j;
        }
    }
    return index;
}

int fun2(int arr[][7], int i, int n)
{
    int j;
    int index = 0;
    for (j = 1; j < n; j++)
    {
        if (arr[j][i] <= arr[index][i])
        {
            index = j;
        }
    }
    return index;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[7][7];
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int count = 0;
    int temp1, temp2;
    for (i = 0; i < n; i++)
    {
        temp1 = fun1(arr, i, n);
        temp2 = fun2(arr, temp1, n);
        if (arr[i][temp1] == arr[temp2][temp1])
        {
            count = 1;
            break;
        }
    }
    if (count == 1)
    {
        printf("%d %d", temp2, temp1);
    }
    else
    {
        printf("NONE");
    }
    return 0;
}