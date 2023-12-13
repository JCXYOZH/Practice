/*
 * 给定一批整数，分析每个整数的每一位数字，求出现次数最多的个位数字。例如给定3个整数1234、2345、3456，其中出现最多次数的数字是3和4，均出现了3次。

输入格式：

输入在第1行中给出正整数N（≤1000），在第二行中给出N个不超过整型范围的非负整数，数字间以空格分隔。

输出格式：

在一行中按格式“M: n1 n2 ...”输出，其中M是最大次数，n1、n2、……为出现次数最多的个位数字，按从小到大的顺序排列。数字间以空格分隔，但末尾不得有多余空格。

输入样例：

3

1234 2345 3456

输出样例：

3: 3 4
*/


#include <stdio.h>

void fun(int *arr, int temp)
{
    while (temp)
    {
        arr[temp % 10]++; //更新数组arr中对应个位数字的计数
        temp /= 10;
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    int i;
    int temp;
    int arr[10] = {0}; //用于存储每个数字的出现次数
    for (i = 0; i < N; i++)
    {
        scanf("%d", &temp);
        fun(&arr, temp);
    }
    int index = 0;
    //找出数组arr中出现次数最多的数字
    for (i = 1; i < 10; i++)
    {
        if (arr[i] > arr[index])
        {
            index = i;
        }
    }
    printf("%d:", arr[index]);
    //打印出出现次数最多的数字以及与之相等的所有数字
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == arr[index])
        {
            printf(" %d", i);
        }
    }
    return 0;
}