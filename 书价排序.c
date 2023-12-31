/*

给定n本书的名称和定价，本题要求编写程序，查找并输出其中定价最高和最低的书的名称和定价。

输入格式:

输入第一行给出正整数n（<10），随后给出n本书的信息。每本书在一行中给出书名，即长度不超过30的字符串，随后一行中给出正实数价格。题目保证没有同样价格的书。

输出格式:

在一行中按照“价格, 书名”的格式先后输出价格最高和最低的书。价格保留2位小数。

输入样例:

3

Programming in C

21.5

Programming in VB

18.5

Programming in Delphi

25.0

输出样例:

25.00, Programming in Delphi

8.50, Programming in VB

*/


#include<stdio.h>

struct book
{
    char name[33];
    double price;
};
int main()
{
    int n;
    struct book arr[10];
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        getchar();
        gets(arr[i].name);
        scanf("%lf",&arr[i].price);
    }
    int index1=0;
    int index2=0;
    for(i=1;i<n;i++)
    {
        if(arr[i].price>=arr[index1].price) index1=i;
    }
    for(i=1;i<n;i++)
    {
        if(arr[i].price<=arr[index2].price) index2=i;
    }

    printf("%.2lf, %s\n",arr[index1].price,arr[index1].name);
    printf("%.2lf, %s\n",arr[index2].price,arr[index2].name);
    return 0;
}