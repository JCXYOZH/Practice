/*
 * 本题要求编写程序，根据输入学生的成绩，统计并输出学生的平均成绩、最高成绩和最低成绩。建议使用动态内存分配来实现。

输入格式：

输入第一行首先给出一个正整数N，表示学生的个数。接下来一行给出N个学生的成绩，数字间以空格分隔。

输出格式：

按照以下格式输出：

average = 平均成绩

max = 最高成绩

min = 最低成绩

结果均保留两位小数。

输入样例：

3

85 90 95

输出样例：

average = 90.00

max = 95.00

min = 85.00 */


#include <stdio.h>

double fun(int *arr, int n, int l)
{
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (l == 1)
        {
            if (arr[i] >= arr[index])
            {
                index = i;
            }
        }
        else
        {
            if (arr[i] <= arr[index])
            {
                index = i;
            }
        }
    }
    return arr[index] / 1.0;
}

int main()
{
    int N;
    int arr[10000];
    int sum = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("average = %.2lf\n", sum / (double)N);
    printf("max = %.2lf\n", fun(&arr, N, 1));
    printf("min = %.2lf\n", fun(&arr, N, 2));
    return 0;
}