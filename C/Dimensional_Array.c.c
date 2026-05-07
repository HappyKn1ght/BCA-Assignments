/*
one dimensional array

#include <stdio.h>

int main()
{

    int a[10], i;
    printf("Enter the array elments: \n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Entered array elements: \n");
    for (int i = 0; i <= 9; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
*/

// two D array
#include <stdio.h>

int main()
{

    int a[2][2], i, j;
    printf("Enter the array elments: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Entered array elements: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}