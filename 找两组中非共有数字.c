/*
 * 给定两个整型数组，本题要求找出不是两者共有的元素。

输入格式:

输入分别在两行中给出两个整型数组，每行先给出正整数N（≤20），随后是N个整数，其间以空格分隔。

输出格式:

在一行中按照数字给出的顺序输出不是两数组共有的元素，数字间以空格分隔，但行末不得有多余的空格。题目保证至少存在一个这样的数字。同一数字不重复输出。

输入样例:

10 3 -5 2 8 0 3 5 -15 9 100

11 6 4 8 2 6 -5 9 0 100 8 1

输出样例:

3 5 -15 6 4 1
 */


#include<stdio.h>

int temp[100];
int tt=0;

void fun(int arr[][22],int n1,int n2)
{
    int i,j;
    int l;
    for(i=0;i<n1;i++)
    {
        int l=1;
        for(j=0;j<n2;j++)
        {
            if(arr[0][i]==arr[1][j]){l=0;break;}
        }
        if(l==1) temp[tt++]=arr[0][i];
    }
    for(i=0;i<n2;i++)
    {
        int l=1;
        for(j=0;j<n1;j++)
        {
            if(arr[1][i]==arr[0][j]){l=0;break;}
        }
        if(l==1) temp[tt++]=arr[1][i];
    }
}

int main()
{
    int arr[2][22];
    int N;
    int i,k;
    int n1,n2; //n1和 n2分别为存储在第一行和第二行的元素个数
    for(k=0;k<2;k++)
    {
        scanf("%d",&N);
        if(k==0) n1=N;
        else n2=N;
        for(i=0;i<N;i++)
        {
            scanf("%d",&arr[k][i]);
        }
    }
    fun(&arr,n1,n2);
    int j;
    int l;
    /*对temp数组进行进一步的检查和处理。它首先通过遍历temp数组并比较每对相邻的元素来找出重复的元素，
     * 如果发现重复，就将该元素的值改为-999999。然后，它遍历temp数组并打印出没有-999999标记的元素。*/
    for(i=0;i<tt-1;i++)
    {
        for(j=i+1;j<tt;j++)
        {
            if(temp[j]==temp[i])temp[j]=-999999;
        }
    }
    for(i=0;i<tt;i++)
    {
        if(temp[i]!=-999999)
        {
            if(i==0) printf("%d",temp[i]);
            else printf(" %d",temp[i]);
        }
    }
    printf("\n");
    return 0;
}