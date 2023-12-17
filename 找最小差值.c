/*问题描述
　　给定 n个数，请找出其中相差（差的绝对值）最小的两个数，输出它们的差值的绝对值。
输入格式
　　输入第一行包含一个整数 n。
　　第二行包含 n个正整数，相邻整数之间使用一个空格分隔。
输出格式
　　输出一个整数，表示答案。
样例输入
5
1 5 4 8 20
样例输出
1
样例说明
　　相差最小的两个数是5和4，它们之间的差值是1。
样例输入
5
9 3 6 1 3
样例输出
0
样例说明
　　有两个相同的数3，它们之间的差值是0.
数据规模和约定
　　对于所有评测用例，2 ≤ n ≤ 1000，每个给定的整数都是不超过10000的正整数。*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    /*动态分配n个整数大小的内存空间，并将其地址存储在指针变量a中*/
    int *a = (int*) malloc(n * sizeof(int));
    char input[100];
    /*从标准输入读取一行字符串，并将其存储在字符数组input中*/
    fgets(input, sizeof(input), stdin);
    /*使用空格将字符串input分割为多个子字符串，并将第一个子字符串的地址存储在指针变量token中*/
    char *token = strtok(input, " ");
    int i = 0;
    while (token != NULL)
    {
        /*将子字符串token转换为整数，并将其存储在数组a中的第i个位置，然后将i的值增加1*/
        a[i++] = atoi(token);
        /*继续获取下一个子字符串，并将其地址存储在指针变量token中*/
        token = strtok(NULL, " ");
    }
    for (int j = 0; j < n-1; j++)
    {
        for (int k = 0; k < n - j - 1; k++)
        {
            if (a[k] > a[k+1])
            {
                int temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
        }
    }
    int min = a[1] - a[0];
    for (int j = 2; j < n; j++)
    {
        if (a[j] - a[j-1] < min)
        {
            min = a[j] - a[j-1];
        }
    }
    printf("%d", min);
    free(a);
    return 0;
}