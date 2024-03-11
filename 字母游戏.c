/* 小红有一个长度为n的字符串s，仅包含小写字母，小红可以选出k个字符，
 * 组成一个新的字符串T，对于T的每一个字符Ti，如果Ti在t中出现的次数为y，则小红会获得y的分数，
 * 现在小红想知道，她最多能获得多少分。
第一行两个整数n，k，表示字符串s的长度和小红选出的字符个数。第二行一个字符串s，表示小红的字符串。*/


#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    char s[1001];
    scanf("%s", s);
    int cnt[26] = {0};
    for (int i = 0; i < n; i++)
    {
        cnt[s[i] - 'a']++;
    }
    qsort(cnt, 26, sizeof(int), cmp);
    long long ans = 0;
    for (int i = 0; i < 26; i++) {
        if (k > cnt[i]) {
            ans += (long long)cnt[i] * cnt[i];
            k -= cnt[i];
        }
        else
        {
            ans += (long long)k * k;
            break;
        }
    }
    printf("%lld\n", ans);
    return 0;
}