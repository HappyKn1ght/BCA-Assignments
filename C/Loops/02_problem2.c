// 2. Write a program to print multiplication table of 10 in reversed order.

#include <stdio.h>

int main()
{
    int i, n = 10;
    printf("Reversed Multiplication Table of %d:\n", n);

    for (i = 10; i; i--)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }

    return 0;
}
