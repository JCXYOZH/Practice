/* 删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。*/


#include <stdio.h>
#include <string.h>

// 删除字符串中指定字母函数
char *deleteCharacters(char *str, char *charSet)
{
    int hash[256];
    if (NULL == charSet)
        return str;
    for (int i = 0; i < 256; i++)
        hash[i] = 0;
    for (int i = 0; i < strlen(charSet); i++)
        hash[charSet[i]] = 1;
    int currentIndex = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (! hash[str[i]])
            str[currentIndex++] = str[i];
    }
    str[currentIndex] = '\0';
    return str;
}

int main()
{
    char s[] = "a"; // 要删除的字母
    char s2[] = "aca"; // 目标字符串
    printf("%s\n", deleteCharacters(s2, s));
    return 0;
}