/* 有两个磁盘文件A和B,各存放一行字母，要求把这两个文件中的信息合并（按字母顺序排列），
 * 输出到一个新文件C中。*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fa, *fb, *fc;
    int i, j, k;
    char str[100], str1[100];
    char tem;
    if ((fa = fopen("A.txt", "r")) == NULL)
    {
        printf("error: cannot open A file!\n");
        exit(0);
    }
    fgets(str1, 99, fa);
    fclose(fa);
    if ((fb = fopen("B.txt", "r")) == NULL)
    {
        printf("error: cannot open B file!\n");
        exit(0);
    }
    fgets(str1, 100, fb);
    fclose(fb);
    strcat(str, str1);
    for (i = strlen(str) - 1; i > 1; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (str[j] > str[j + 1])
            {
                tem = str[j];
                str[j] = str[j + 1];
                str[j + 1] = tem;
            }
        }
    }
    if ((fc = fopen("C.txt", "w")) == NULL)
    {
        printf("error: cannot open C file!\n");
        exit(0);
    }
    fputs(str, fc);
    fclose(fc);
    system("pause");
    return 0;
}