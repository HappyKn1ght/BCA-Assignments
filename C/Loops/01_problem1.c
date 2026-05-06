// 1. Write a program to print multiplication table of a given number n.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &n);

    printf("Multiplication Table of %d:\n", n);
    printf("x----------x----------x\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    printf("x----------x----------x\n");
    printf("Press Enter to exit...");
    getchar(); // Wait for the user to press Enter
    getchar(); // Extra getchar to account for the newline from previous input

    return 0;
}
