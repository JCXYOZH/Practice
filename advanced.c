/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *a = (int*)malloc(n * sizeof(int));
    char input[100];
    fgets(input, sizeof(input), stdin);
    char *token = strtok(input, " ");
    int i = 0;
    while (token != NULL)
    {
        a[i++] = atoi(token);
        token = strtok(NULL, " ");
    }
    for (int j = 0; j < n - 1; j++)
    {
        for (int k = 0; k < n - j - 1; k++)
        {
            if (a[k] > a[k + 1])
            {
                int temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
        }
    }
    int min = a[1] - a[0];
    for (int j = 2; j < n; j++)
    {
        if (a[j] - a[j - 1] < min)
        {
            min = a[j] - a[j - 1];
        }
    }
    printf("%d", min);
    free(a);
    return 0;
}*/


/*
#include <stdio.h>
#define MAXN 10

struct student{
    int num;
    char name[20];
    int score;
    char grade;
};

int set_grade(struct student *p, int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i].score >= 85 && p[i].score <= 100)
            p[i].grade = 'A';
        if (p[i].score >= 70 && p[i].score <= 84)
            p[i].grade = 'B';
        if (p[i].score >= 60 && p[i].score <= 69)
            p[i].grade='C';
        if (p[i].score >= 0 && p[i].score <= 59)
        {
            p[i].grade = 'D';
            temp++;
        }
    }
    return temp;
}

int main()
{
    struct student stu[MAXN], *ptr;
    int n, i, count;
    ptr = stu;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %s %d", &stu[i].num, &stu[i].name, &stu[i].score);
    }
    count = set_grade(ptr, n);
    printf("The count for failed (<60): %d\n", count);
    printf("The grades:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d %s %c\n", stu[i].num, stu[i].name, stu[i].grade);
    }
    return 0;
}*/


/*
#include <stdio.h>

char *getmonth(int n)
{
    if (n <= 0 || n > 12)
        return NULL;
    else
    {
        if (n == 1)
            return "January";
        if (n == 2)
            return "February";
        if (n == 3)
            return "March";
        if (n == 4)
            return "April";
        if (n == 5)
            return "May";
        if (n == 6)
            return "June";
        if (n == 7)
            return "July";
        if (n == 8)
            return "August";
        if (n == 9)
            return "September";
        if (n == 10)
            return "October";
        if (n == 11)
            return "November";
        if (n == 12)
            return "December";
    }
}

int main()
{
    int n;
    char *s;
    scanf("%d", &n);
    s = getmonth(n);
    if (s == NULL)
        printf("wrong input!");
    else
        printf("%s", s);
    return 0;
}*/


/*
#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex(char *s)
{
    int i;
    int l = -1;
    char str[8][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for (i = 0; i < 7; i++)
    {
        if (strcmp(s, str[i]) == 0)
        {
            l = 1;
            break;
        }
    }
    if (l == 1)
        return i;
    else
        return l;
}

int main()
{
    char s[MAXS];
    scanf("%s", s);
    if (getindex(s) == -1)
    {
        printf("wrong input!");
    }
    else
    {
        printf("%d", getindex(s));
    }
    return 0;
}*/


/*
#include <stdio.h>

int sum(int n)
{
    if (n > 0)
    {
        if (n == 1)
            return 1;
        else
            return n + sum(n - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}*/


/*
#include <stdio.h>

double fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
    {
        return n * fact(n - 1);
    }
}

double factsum(int n)
{
    if (n == 0)
        return 0;
    else
    {
        double sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += fact(i);
        }
        return sum;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("fact(%d) = %.0f\n", n, fact(n));
    printf("sum = %.0f\n", factsum(n));
    return 0;
}*/


/*
#include <stdio.h>
#include <string.h>
#define MAXN 20

void ReadString(char s[]); //由裁判实现，略去不表
void strmcpy(char *t, int m, char *s)
{
    int i = 0;
    if (m > strlen(t))
    {
        *s = NULL;
    }
    else
    {
        m = m - 1;
        while (t[m] != '\0')
        {
            s[i++] = t[m];
            m++;
        }
        s[i] = '\0';
    }
}

int main()
{
    char t[MAXN], s[MAXN];
    int m;
    scanf("%d", &m);
    ReadString(t);
    strmcpy(t, m, s);
    printf("%s", s);
    return 0;
}*/


/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXN 20

void delchar(char *str, char c)
{
    int len = strlen(str);
    char *strTemp = (char*)malloc(sizeof(char)*len); //
    int i = 0;
    int t = 0;
    while (str[i] != '\0')
    {
        if (str[i] != c)
        {
            strTemp[t++] = str[i];
            i++;
        }
    }
    strTemp[t] = '\0';
    for (int i = 0; i <= t; i++)
    {
            str[i] = strTemp[i];
    }
}

int main()
{
    char str[MAXN], c;
    scanf("%c", &c);
    delchar(str, c);
    printf("%s", str);
    return 0;
}*/


/*
#include <stdio.h>
#include <string.h>

#define MAXN 20

typedef enum {false, true} bool;

bool palindrome(char *s)
{
    int l = 1;
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - 1 - i])
        {
            return 0;
            break;
        }
    }
    if (l == 1)
        return true;
    else
        return false;
}

int main()
{
    char s[MAXN];
    scanf("%s", &s);
    if (palindrome(s) == true)
        printf("YES");
    else
        printf("NO");
    return 0;
}*/


/*
#include <stdio.h>

double calc_pow(double x, int n)
{
    if (n == 1)
        return x;
    else
        return x * calc_pow(x, n - 1);
}

int main()
{
    double x;
    int n;
    scanf("%lf %d", &x, &n);
    printf("%.0f", calc_pow(x, n));
    return 0;
}*/


/*#include <stdio.h>
#include <math.h>

double fn(double x, int n)
{
    if (n == 1)
        return x;
    else
        return pow(-1, n - 1) * pow(x, n) + fn(x, n - 1);
}

int main()
{
    double x;
    int n;
    scanf("%lf %d", &x, &n);
    printf("%.2f", fn(x, n));
    return 0;
}*/


/*
#include <stdio.h>

int Ack(int m, int n)
{
    if (m == 0)
        return n + 1;
    else
    {
        if (n == 0 && m > 0)
            return Ack(m - 1, 1);
        if (n > 0 && m > 0)
            return Ack(m - 1, Ack(m, n - 1));
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &m, &n);
    printf("%d", Ack(m, n));
    return 0;
}*/


/*#include <stdio.h>

int f(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return f(n - 2) + f(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}*/


/*
#include <stdio.h>

void dectobin(int n)
{
    if (n < 2)
        printf("%d", n % 2);
    else
    {
        dectobin(n / 2);
        printf("%d", n % 2);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    dectobin(n);
    return 0;
}*/


/*
#include <stdio.h>

void printdigits(int n)
{
    if (n <= 10)
        printf("%d\n", n % 10);
    else
    {
        printdigits(n / 10);
        printf("%d\n", n % 10);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printdigits(n);
    return 0;
}*/


/*
#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 5; j++)
        {
            for (k = 1; k < 5; k++)
            {
                if (i != k && i != j && j != k)
                {
                    printf("%d%d%d\n", i, j, k);
                }
            }
        }
    }
}*/


/*#include <stdio.h>

int main()
{
    double i, bonus, bonus1, bonus2, bonus4, bonus6, bonus10;
    scanf("%lf", &i);
    bonus1  =100000 * 0.1;
    bonus2 = bonus1 + 100000 * 0.075;
    bonus4 = bonus2 + 200000 * 0.05;
    bonus6 = bonus4 + 200000 * 0.03;
    bonus10 = bonus6 + 400000 * 0.015;
    if (i <= 100000)
    {
        bonus = i * 0.1;
    }
    else if (i <= 200000)
    {
        bonus = bonus1 + (i - 100000) * 0.075;
    }
    else if(i <= 400000)
    {
        bonus = bonus2 + (i - 200000) * 0.05;
    }
    else if(i <= 600000)
    {
        bonus = bonus4 + (i - 400000) * 0.03;
    }
    else if(i <= 1000000)
    {
        bonus = bonus6 + (i - 600000) * 0.015;
    }
    else if(i > 1000000)
    {
        bonus = bonus10 + (i - 1000000) * 0.01;
    }
    printf("bonus = %lf", bonus);
}*/


/*#include <stdio.h>

int is_prime(int num)
{
    if(num < 2) return 0;
    for (int i = 2; i * i <= num; i++){
        if(num % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int n = 0, result = -1, cnt = 0;
    scanf("%d", &n);
    int a[n];
    int b[n - 1], k = 0;
    int c[n - 1], j = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n - 1; i++){
        b[k++] = a[i] + a[i + 1];
    }
    for(int i = 0; i < n - 1; i++){
        c[j++] = is_prime(b[i]);
        if(c[j - 1] == 0) cnt++;
    }
    if(cnt == 1 || cnt == 2){
        int I = 0;
        for (int i = 0; i < n - 1; i++){
            if (c[i] == 0){
                I = i + 1;
                break;
            }
        }
        result = I + 1;
        int t = a[I];
        a[I] = a[I + 1];
        a[I + 1] = t;
        b[I - 1] = a[I - 1] + a[I];
        b[I] = a[I] + a[I + 1];
        j = 0;
        for(int i = 0; i < n - 1; i++){
            c[j++] = is_prime(b[i]);
            if (c[j - 1] == 0){
                result = -1;
                break;
            }
        }
    }
    else result = -1;
    printf("%d\n", result);
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int n, m, i, j, x;
    for (i = 1; i < 168 / 2 + 1; i++)
    {
        if (168 % i == 0)
        {
            j = 168 / i;
            if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
            {
                m = (i + j) / 2;
                n = (i - j) / 2;
                x = n * n - 100;
                printf("%d + 100 = %d * %d\n", x, n, n);
                printf("%d + 268 = %d * %d\n", x, m, m);
            }
        }
    }
    return 0;
}*/


/*
#include <stdio.h>

int main()
{
    int day, month, year, sum, leap;
    scanf("%d %d %d", &year, &month, &day);
    switch (month) {
        case 1:
            sum = 0;
            break;
        case 2:
            sum = 31;
            break;
        case 3:
            sum=59;
            break;
        case 4:
            sum=90;
            break;
        case 5:
            sum=120;
            break;
        case 6:
            sum=151;
            break;
        case 7:
            sum=181;
            break;
        case 8:
            sum=212;
            break;
        case 9:
            sum=243;
            break;
        case 10:
            sum=273;
            break;
        case 11:
            sum=304;
            break;
        case 12:
            sum=334;
            break;
        default:
            printf("data error");
            break;
    }
    sum += day;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        leap = 1;
    }
    else{
        leap = 0;
    }
    if (leap = 1 && month > 2)
    {
        sum++;
    }
    printf("%d\n", sum);
    return 0;
}*/


/*
#include <stdio.h>

int main()
{
    int x, y, z, t;
    scanf("%d %d %d", &x, &y, &z);
    if (x > y)
    {
        t = x;
        x = y;
        y = t;
    }
    if (x > z)
    {
        t = z;
        z = x;
        x = t;
    }
    if (y > z)
    {
        t = y;
        y = z;
        z = t;
    }
    printf("%d %d %d\n", x, y, z);
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    char a = 176, b = 219;
    printf("%c %c %c %c %c\n", b, a, a, a, b);
    printf("%c %c %c %c %c\n", a, b, a, b, a);
    printf("%c %c %c %c %c\n", a, a, b, a, a);
    printf("%c %c %c %c %c\n", a, b, a, b, a);
    printf("%c %c %c %c %c\n", b, a, a, a, b);
    return 0;
}*/


/*
#include <stdio.h>

int main()
{
    int i, j, res;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
        {
            res = i * j;
            printf("%d * %d = %-3d", i, j, res);
        }
        printf("\n");
    }
    return 0;
}*/


/*
#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("%c%c", 219, 219);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/


/*
#include <stdio.h>

int main()
{
    int i, j;
    printf("\1\1\n");
    for (i = 1; i < 11; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c%c", 219, 219);
        }
        printf("\n");
    }
    return 0;
}*/


/*
#include <stdio.h>

int main()
{
    int f1 = 1, f2 = 1, i;
    for (i = 1; i <= 20; i++)
    {
        printf("%12d%12d", f1, f2);
        if (i % 2 == 0)
        {
            printf("\n");
        }
        f1 = f1 + f2;
        f2 = f1 + f2;
    }
    return 0;
}*/


/*
#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr = (int *)(&a + 1);
    printf("%d %d\n", *(a + 1), *(ptr - 1));
    return 0;
}*/


/*
#include <stdio.h>

struct Test
{
    int Num;
    char *pcName;
    short sDate;
    char cha[2];
    short sBa[4];
} *p;

int main()
{
    p = (struct Test*)0x100000;
    printf("%p\n", p + 0x1);
    printf("%p\n", (unsigned long)p + 0x1);
    printf("%p\n", (unsigned int*)p + 0x1);
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int a[4] = {1, 2, 3, 4};
    int *ptr1 = (int *)(&a + 1);
    int *ptr2 = (int *)((int)a + 1);
    printf("%x %x", ptr1[-1], *ptr2);
    return 0;
}*/


//
/*#include <stdio.h>

int main()
{
    int a[3][2] = {(0, 1), (2, 3), (4, 5)};
    int *p;
    p = a[0];
    printf("%d\n", p[0]);
    return 0;
}*/


//
/*
#include <stdio.h>

int main()
{
    int a[5][5];
    int (*p)[4];
    p = a;
    printf("%p %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
    return 0;
}*/


//
/*#include <stdio.h>

int main()
{
    int aa[2][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr1 = (int *)(&aa + 1);
    int *ptr2 = (int *)(*(aa + 1));
    printf("%d %d\n", *(ptr1 - 1), *(ptr2 - 1));
    return 0;
}*/


//
/*
#include <stdio.h>

int main()
{
    char *a[] = {"work", "at", "alibaba"};
    char **pa = a;
    pa++;
    printf("%s\n", *pa);
    return 0;
}*/


//
/*
#include <stdio.h>

int main()
{
    char *c[] = {"ENTER", "NEW", "POINT", "FIRST"};
    char **cp[] = {c + 3, c + 2, c + 1, c};
    char ***cpp = cp;
    printf("%s\n", **++cpp);
    printf("%s\n", *--*++cpp + 3);
    printf("%s\n", *cpp[-2] + 3);
    printf("%s\n", cpp[-1][-1] + 1);
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    unsigned long pulArray[] = {6, 7, 8, 9, 10};
    unsigned long *pulPtr;
    pulPtr = pulArray;
    *(pulPtr + 3) += 3;
    printf("%d %d\n", *pulPtr, *(pulPtr + 3));
    return 0;
}*/


/*#include <stdio.h>
#include <math.h>

#define N 100000

int main()
{
    int i;
    for (i = 0; i <= N; i++)
    {
        int n = 1;
        int tmp = i;
        int sum = 0;
        while (tmp /= 10)
        {
            n++;
        }
        tmp = i;
        while (tmp)
        {
            sum += pow(tmp % 10, n);
            tmp /= 10;
        }
        if (i == sum)
        {
            printf("%d ", i);
        }
    }
    return 0;
}*/


/*
#include <stdio.h>

int main()
{
    int line;
    int i;
    scanf("%d", &line);
    for (i = 0; i < line; i++)
    {
        int j;
        for (j = 0; j < line - 1 - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 0; i < line - 1; i++)
    {
        int j;
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/