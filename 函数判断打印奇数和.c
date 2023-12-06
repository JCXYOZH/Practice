/*本题要求实现一个函数，计算N个整数中所有奇数的和，
 * 同时实现一个判断奇偶性的函数。

函数接口定义：

int even( int n );
int OddSum( int List[], int N );

其中函数even将根据用户传入的参数n的奇偶性返回相应值：
当n为偶数时返回1，否则返回0。
函数OddSum负责计算并返回传入的N个整数List[]中所有奇数的和。
*/


#include <stdio.h>
#define MAXN 10

int even(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int OddSum (int List[], int N)
{
    int i, sum = 0;
    for (i = 0; i < N; i++)
    {
        if (List[i] % 2 != 0)
        {
            sum += List[i];
        }
    }
    return sum;
}

int main()
{
    int List[MAXN], N, i;
    scanf("%d", &N);
    printf("\nSum of (");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &List[i]);
        if (even(List[i]) == 0)
        {
            printf("%d ", List[i]);
        }
    }
    printf(") = %d", OddSum(List, N));
    return 0;
}