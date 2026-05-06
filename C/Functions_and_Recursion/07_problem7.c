// 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.

#include <stdio.h>

int sum_natural(int);
int sum_natural(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return sum_natural(n - 1) + n;
}

int main()
{
    int n;
    printf("Enter the number of natural numbers to sum: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        printf("The sum of the first %d natural numbers is %d\n", n, sum_natural(n));
    }

    return 0;
}
