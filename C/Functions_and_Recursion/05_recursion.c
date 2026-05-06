#include <stdio.h>

int factorial(int);

int factorial(int n)
{
    if (n == 1 || n == 0) //base condition
    {
        return 1;
    }
    // factorial = factorial(n-1) x n
    return n * factorial(n - 1);
}

int main()

{
    int num;
    printf("Input num: ");
    scanf("%d", &num);

    printf("The factorial of %d is %d.\n", num, factorial(num));

    return 0;
}