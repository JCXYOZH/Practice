/*
 * 本题要求将给定的n个整数从大到小排序后输出。

输入格式：

输入第一行给出一个不超过10的正整数n。第二行给出n个整数，其间以空格分隔。

输出格式：

在一行中输出从大到小有序的数列，相邻数字间有一个空格，行末不得有多余空格。

输入样例：

4

5 1 7 6

输出样例：

7 6 5 1
 */


#include <stdio.h>

int main()
{
    int n, i, j, index, t, arr[11];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        index = i; //将当前索引i赋值给index
        t = arr[i]; //将当前索引i的元素值保存到变量t中
        for (j = i + 1; j < n; j++) //找到从索引i+1到数组末尾中的最小元素
        {
            if (arr[j] >= arr[index])
            {
                index = j; //如果找到一个更小的元素，更新index
            }
        }
        arr[i] = arr[index]; //将找到的最小元素与当前索引i的元素交换
        arr[index] = t; //将当前索引i的元素值赋给找到的最小元素的位置
    }
    for (i = 0; i < n; i++)
    {
        if (i == n - 1)
            printf("%d", arr[i]);
        else
            printf("%d ", arr[i]);
    }
    return 0;
}