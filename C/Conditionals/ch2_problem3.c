/*Chapter-2, question no.3
Write a program to check whether a number is divisible by 97 or not.
*/
#include <stdio.h>

int main()
{
    int number, divisible;

    printf("Enter the number: ");
    scanf("%d", &number);

    divisible = number % 97;
    if (divisible == 0)
    {
        printf("Because the value of entered number is %d,\n", divisible);
        printf("so it's divisible.");
    }
    else
    {
        printf("not divisible,\ntry another number.");
    }

    return 0;
}