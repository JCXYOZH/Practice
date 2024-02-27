/* 某个公司采用公用电话传递数据，数据是四位的整数，
 * 在传递过程中是加密的，加密规则如下：每位数字都加上5,
 * 然后用和除以10的余数代替该数字，再将第一位和第四位交换，
 * 第二位和第三位交换 */


#include <stdio.h>

int main()
{
    int a, i, aa[4], t;
    scanf("%d", &a);
    aa[0] = a % 10;
    aa[1] = a % 100 / 10;
    aa[2] = a % 1000 / 100;
    aa[3] = a / 1000;
    for (i = 0; i <= 3; i++)
    {
        aa[i] += 5;
        aa[i] %= 10;
    }
    for (i = 0; i <= 3 / 2; i++)
    {
        t = aa[i];
        aa[i] = aa[3 - i];
        aa[3 - i] = t;
    }
    for (i = 3; i >= 0; i--)
        printf("%d", aa[i]);
    printf("\n");
    return 0;
}