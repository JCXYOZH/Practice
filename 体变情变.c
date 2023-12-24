/*小红每天都会称体重，连续称n天。从第二天开始，如果有一天体重不小于a,
 * 且前一天的体重小于a,那么小红这天就会不开心。
小红想知道，她一共会有多少天不开心?

输入描述

第一行输入两个正整数n, a
第二行输入n个正整数xi,代表每天的体重。
2≤n≤100
1≤a≤100
1≤xi≤100

输出描述

一个整数，代表不开心的天数。

示例1

输入

5 53
50 52 55 53 55

输出

1

说明

只有第三天会不开心。
*/


#include <stdio.h>

int main()
{
    int n, a;
    int count = 0;
    int prevWeight, currWeight;
    scanf("%d %d", &n, &a);
    scanf("%d", &prevWeight);  // 记录第一天的体重
    for (int i = 2; i <= n; i++) {
        scanf("%d", &currWeight);
        if (currWeight >= a && prevWeight < a) {
            count++; // 如果有一天体重不小于a且前一天体重小于a，则count加1
        }
        prevWeight = currWeight; // 更新前一天的体重为当前体重
    }
    printf("%d\n", count); // 输出不开心的天数
    return 0;
}