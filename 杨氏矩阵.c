#include <stdio.h>

int FindNum(int arr[3][3], int k, int *px, int *py)
{
    int x = 0;
    int y = *py - 1;
    while (x <= *px - 1  && y >= 0)
    {
        if (arr[x][y] > k)
        {
            y--;
        }
        else if (arr[x][y] < k)
        {
            x++;
        }
        else
        {
            *px = x;
            *py = y;
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 7;
    int x = 3;
    int y = 3;
    if (FindNum(arr, k, &x, &y) == 1)
    {
        printf("zdl\n");
        printf("xbw:(%d,%d)\n", x, y);
    }
    else
    {
        printf("wzd\n");
    }
    return 0;
}