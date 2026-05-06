// 10. Write a program to check whether a given number is not_prime or not using loops.

#include <stdio.h>

int main()

{
    int i, num;
    int not_prime = 0;
    printf("Enter The Number: ");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        not_prime = 1;
    }
    else
    {

        for (i = 2; i < num; i++)
        {
            if (num % i == 0 && num != 2)
            {
                not_prime = 1;
                break;
            }
        }
    }

    if (not_prime)
    {
        printf("%d is not prime\n", num);
    }
    else
    {
        printf("%d is prime\n", num);
    }
    return 0;
}