#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("Your age is greater than 18\n");
        printf("congratulations, Now You're 18+");
    }

    return 0;
}