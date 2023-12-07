/*本题要求实现一个统计整数中指定数字的个数的简单函数。

函数接口定义：

int CountDigit( int number, int digit );

其中number是不超过长整型的整数，digit为[0, 9]区间内的整数。
函数CountDigit应返回number中digit出现的次数。

 输入样例：

-21252 2

输出样例：

Number of digit 2 in -21252: 3  */


#include <stdio.h>

int CountDigit(int number, int digit)
{
    if (number < 0)
    {
        number *= -1;
    }
    if (number == 0 && digit == 0)
    {
        return 1;
    }
    else
    {
        int count = 0;
        while (number)
        {
            int temp = number % 10;
            if (temp == digit)
            {
                count++;
            }
            number /= 10;
        }
        return count;
    }
}

int main()
{
    int number, digit;
    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d", digit, number, CountDigit(number, digit));
    return 0;
}