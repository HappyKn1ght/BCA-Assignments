#include <stdio.h>

int main()
{
    int num, i;
    printf("Input Number: ");
    scanf("%d", &num);
    /*The original code prints numbers down to 1 but skips 0.
     By changing the loop condition to i >= 0, it will print all the way down to 0.*/
    for (i = num; i; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}
