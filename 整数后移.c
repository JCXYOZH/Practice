/* 有 n个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。*/


#include <stdio.h>

void print_arr(int array[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("%4d", array[i]);
    }
    printf("\n");
}

void move(int array[], int n, int offset)
{
    int *p, *arr_end, last;
    arr_end = array + n;

    while (offset)
    {
        last = *(arr_end - 1);
        for (p = arr_end - 1; p != array; --p)
        {
            *p = *(p - 1);
        }
        *array = last;
        --offset;
    }
}

int main()
{
    int arr[20];
    int i, n, offset;
    printf("number:");
    scanf("%d", &n);
    printf("numbers:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("offset:");
    scanf("%d", &offset);
    print_arr(arr, n);
    move(arr, n, offset);
    print_arr(arr, n);
    return 0;
}