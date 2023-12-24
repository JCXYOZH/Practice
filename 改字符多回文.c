/*小红拿到了一个字符串，她可以操作最多1次:修改任意一个字符。
小红希望操作结束后，长度为3的回文连续子串的数量尽可能多。请你求出这个数量。

输入描述

一个仅包含小写字母的字符串。长度不超过100。

输出描述

一个整数， 代表操作结束后， 长度为3的回文连续子串的数量的最大值。

示例1

输入

abcde

输出

1

说明

将第二个字符修改为'd'即可，这样字符串变成"adcde",共包含1个长度为3的回文子串。
*/


#include <stdio.h>
#include <string.h>

int countPalindromes(char *s, int len)
{
    int count = 0;
    for (int i = 1; i < len - 1; i++) {
        if (s[i-1] == s[i+1]) {
            count++;
        }
    }
    return count;
}

int main() {
    char s[101];
    scanf("%s", s);
    int len = strlen(s);
    int maxCount = countPalindromes(s, len);
    // 尝试修改每个字符，重新计算回文连续子串的数量，取最大值
    for (int i = 0; i < len; i++) {
        char prev = s[i];
        for (char c = 'a'; c <= 'z'; c++) {
            if (c != prev) {
                s[i] = c;
                int count = countPalindromes(s, len);
                if (count > maxCount) {
                    maxCount = count;
                }
            }
        }
        s[i] = prev; // 恢复原来的字符
    }
    printf("%d\n", maxCount);
    return 0;
}