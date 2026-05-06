// 9. Repeat 8 using while loop.

#include <stdio.h>

int main()

// 8! = 1x2x3x4x5x6x7x8
// 5! = 1x2x3x4x5
// n! = 1x2x3.....xn
// 0! = 1
{

    int i = 1, n;
    int factorial = 1;

    printf("Input Number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    printf("The Factorial of %d is %d.", n, factorial);
    return 0;
}