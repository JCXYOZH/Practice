/*
 * 本题要求编写程序，将给定n×n方阵中的每个元素循环向右移m个位置，即将第0、1、⋯、n−1列变换为第n−m、n−m+1、⋯、n−1、0、1、⋯、n−m−1列。

输入格式：

输入第一行给出两个正整数m和n（1≤n≤6）。接下来一共n行，每行n个整数，表示一个n阶的方阵。

输出格式：

按照输入格式输出移动后的方阵：即输出n行，每行n个整数，每个整数后输出一个空格。

输入样例：

2 3

1 2 3

4 5 6

7 8 9

输出样例：

2 3 1

5 6 4

8 9 7
 */


#include <stdio.h>

int main()
{
    int m, n, i, j, k, index, arr[7][7];
    scanf("%d %d", &m, &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    /*通过三层嵌套的for循环来实现方阵元素的循环右移。
     * 外层循环变量k控制移动的次数，
     * 中层循环变量i遍历方阵的每一行，
     * 内层循环变量j负责元素移动操作。*/
    for (k = 0; k < m; k++)
    {
        for (i = 0; i < n; i++)
        {
            index = arr[i][n - 1]; //将方阵第i行最后一个元素暂存于index
            for (j = n - 1; j > 0; j--)
            {
                arr[i][j] = arr[i][j - 1]; //将元素向右移动,即将前一个元素的值赋给后一个元素,一直持续到该行的倒数第二个元素
            }
            arr[i][j] = index; //将之前存储在index中的最后一个元素赋给第一个元素，完成循环右移操作
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}