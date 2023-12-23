/*小红有一个数组，这个数组每一对相邻的元素的和都是质数。

但是小紫偷偷的把数组中的一对A(x)和A(x+1)进行了交换，你能找出是x是多少吗?

输入描述

第一行输入一个整数n(1≤n≤10的5次幂)表示数组长度。
第二行输入n个整数表示数组a(1≤A(i)≤10的5次幂)。

输出描述

输出一个整数表示答案，如果找不到x，或者有多个答案，则输出-1。

示例1

输入

3
1 3 2

输出

2

说明

小红的数组为123,小紫交换了第2, 3个数，因此答案为2。*/


#include <stdio.h>


//判断一个数是否为质数，如果是质数，返回1，否则返回0
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
    int a[n]; //用于存储输入的数组元素
    int b[n - 1], k = 0; //用于存储相邻元素
    int c[n - 1], j = 0; //存储相邻元素和是否为质数的结果
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    //通过遍历数组 a计算相邻元素的和，并存储到数组 b中
    for(int i = 0; i < n - 1; i++){
        b[k++] = a[i] + a[i + 1];
    }
    //遍历数组 b，通过调用 is_prime() 函数判断相邻元素和是否为质数，并统计不是质数的个数
    for(int i = 0; i < n - 1; i++){
        c[j++] = is_prime(b[i]);
        if(c[j - 1] == 0) cnt++;
    }
    /* 如果不是质数的个数是1或2，说明只有一对相邻元素的和不是质数，
    接下来找到这对相邻元素并进行交换，
    同时更新相邻元素和的数组 b 和判断结果的数组 c。
    如果交换后任然有不是质数的相邻元素和，
    或者不是质数的个数大于2，则结果设为-1，表示无解。*/
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
}