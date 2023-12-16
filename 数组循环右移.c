/*本题要求实现一个对数组进行循环右移的简单函数：一个数组a中存有n（>0）个整数，将每个整数循环向右移m（≥0）个位置，即将a中的数据由
（a0a1...an-1）变换为（an-m...an-1a0a1...an-m-1）
（最后m个数循环移最前面的m个位置）。

函数接口定义：

int ArrayShift( int a[], int n, int m );

其中 a[] 是用户传入的数组；n是数组的大小；m是右移的位数。
函数 ArrayShift 须将循环右移后的数组仍然存在a[]中。

输入样例：

6 2

1 2 3 4 5 6

输出样例：

5 6 1 2 3 4 */


#include <stdio.h>
#define MAXN 10

int ArrayShift(int a[], int n, int m)
{
    int i, k;
    for (k = 1; k <= m; k++)
    {
        int temp = a[n - 1];
        for (i = n - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = temp;
    }
}

int main()
{
    int n, m, i, a[MAXN];
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    ArrayShift(a, n, m);
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            printf(" ");
        }
        printf("%d", a[i]);
    }
    return 0;
}