// 1. Write a program using function to find average of three numbers.
#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    printf("The average of %d, %d and %d is %.2f.\n", a, b, c, average(a, b, c));
    return 0;
}
