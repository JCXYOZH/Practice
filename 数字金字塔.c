#include <stdio.h>

void pyramid(int n)
{
    int i;
    int temp = n; //控制每行输出的空格数量。
    for (i = 1; i <= n; i++) //外层循环，从1开始到 n，用于控制金字塔的行数。
    {
        int j = 1; //控制每行输出的数字数量。
        for (;j < temp; j++) //在每行开始时打印空格，以便让数字在输出中居中，这个循环从1开始到当前行的数字数量，每循环一次打印一个空格。
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) //内层循环，从1开始到当前行的数字，用于控制每行输出的数字数量。
        {
            printf("%d ", i); //在内层循环中打印当前行的数字i。
        }
        printf("\n");
        temp--; //每次完成一行打印后，将 temp减1，以便下一行打印更少的空格。
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    pyramid(n);
    return 0;
}