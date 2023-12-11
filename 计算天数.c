/*
 * 本题要求编写程序计算某年某月某日是该年中的第几天。

输入格式:

输入在一行中按照格式“yyyy/mm/dd”（即“年/月/日”）给出日期。注意：闰年的判别条件是该年年份能被4整除但不能被100整除、或者能被400整除。闰年的2月有29天。

输出格式:

在一行输出日期是该年中的第几天。

输入样例1:

2009/03/02

输出样例1:

61

输入样例2:

2000/03/02

输出样例2:

62
 */


#include<stdio.h>

int fun(int yy,int mm)
{
    int temp=0;
    int sum=0;
    if((yy%4==0&&yy%100!=0)||(yy%400==0)) temp=1;
    int arr[13]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(temp==1) arr[1]=29;
    int i;
    for(i=0;i<mm-1;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int yyyy;
    int mm;
    int dd;
    scanf("%d/%d/%d",&yyyy,&mm,&dd);
    int temp=fun(yyyy,mm);
    printf("%d\n",temp+dd);
    return 0;
}