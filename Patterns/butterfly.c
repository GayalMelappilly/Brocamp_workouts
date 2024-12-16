#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k, limit;

    printf("ENTER THE LIMIT : ");
    scanf("%d", &limit);

    for (k = 0; k < 2; k++)
    {
        for (i = 0; i < limit; i++)
        {
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            for (j = 0; j <= ((limit - i) * 2) - 1; j++)
            {
                printf("  ");
            }
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = limit; i >= 0; i--)
        {
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            for (j = 0; j <= ((limit - i) * 2) - 1; j++)
            {
                printf("  ");
            }
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}