#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void caizi()
{
    int n;
    char begin;
    int count = 1;
    srand((int) time(NULL));
    int m = (rand() % 100) + 1;
    puts("ks,qsr:");
    while (1)
    {
        scanf("%d", &n);
        if (n == m)
        {
            printf("sy %d c\n", count);
            if (count == 1)
            {
                printf("sjrw\n");
                getchar();
                printf("jx? Y/N \n");
                scanf("%c", &begin);
                if (begin == 'Y' || begin == 'y')
                {
                    caizi();
                }
                else
                {
                    printf("zj\n");
                }
            }
            else if (count <= 5)
            {
                printf("wjrw\n");
                getchar();
                printf("tzzgj? Y/N \n");
                scanf("%c", &begin);
                if (begin == 'Y' || begin == 'y')
                {
                    caizi();
                }
                else
                {
                    printf("zj\n");
                }
            }
            else if (count <= 10)
            {
                printf("dsjrw? \n");
                getchar();
                printf("tzzgjb? Y/N \n");
                scanf("%c", &begin);
                if (begin == 'Y' || begin == 'y')
                {
                    caizi();
                }
                else
                {
                    printf("zj\n");
                }
            }
            else if (count <= 15)
            {
                printf("zsrw \n");
                getchar();
                printf("tzzgjb Y/N \n");
                scanf("%c", &begin);
                if (begin == 'Y' || begin == 'y')
                {
                    caizi();
                }
                else
                {
                    printf("zj\n");
                }
            }
            else
            {
                getchar();
                printf("ydtg,cw? Y/N\n");
                scanf("%c",&begin);
                if (begin == 'Y' || begin == 'y')
                {
                    caizi();
                }
                else
                {
                    printf("zj\n");
                }
            }
            break;
        }
        else if (n < m)
        {
            puts("xl!");
            puts("cxsr:");
        }
        else
        {
            puts("dl!");
            puts("cxsr:");
        }
        count++;
    }
}

int main()
{
    caizi();
    system("pause");
    return 0;
}