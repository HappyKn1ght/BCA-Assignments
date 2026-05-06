// 8. Write a program to calculate the factorial of a given number using a for loop.

#include <stdio.h>

int main()

// 8! = 1x2x3x4x5x6x7x8
// 5! = 1x2x3x4x5
// n! = 1x2x3.....xn
// 0! = 1
{

    int i, n;
    int factorial = 1;

    printf("Input Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The Factorial of %d is %d.", n, factorial);
    return 0;
}