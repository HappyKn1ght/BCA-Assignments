#include <stdio.h>

int main()
{
    int marks[5];
    printf("Enter 5 input:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("Output:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", marks[i]);
    }

    return 0;
}