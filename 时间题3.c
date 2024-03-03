#include <stdio.h>
#include <time.h>

int main()
{
    long i = 10000000L;
    clock_t start, finish;
    double TheTimes;
    printf("%ld", i);
    start = clock();
    while (i--);
    finish = clock();
    TheTimes = (double)(finish-start)/CLOCKS_PER_SEC;
    printf("%f\n", TheTimes);
    return 0;
}