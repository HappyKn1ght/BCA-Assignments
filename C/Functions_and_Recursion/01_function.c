#include <stdio.h>

// function prototype
int sum(int, int);
//function definition
int sum(int x, int y)
{
    printf("the sum is %d.\n", x + y);
    return x + y;
}
int main()
{

    int a = 1;
    int b = 2;
    // int c = a + b;
    // printf("The sum is %d.\n", c);
    sum(a, b);

    int a1 = 3;
    int b1 = 4;
    // int c1 = a1 + b1;
    // printf("The sum is %d.\n", c1);
    sum(a1, b1);

    int a2 = 5;
    int b2 = 6;
    // int c2 = a2 + b2;
    // printf("The sum is %d.\n", c2);
    sum(a2, b2);

    int a3 = 7;
    int b3 = 8;
    // int c3 = a3 + b3;
    // printf("The sum is %d.\n", c3);
    sum(a3, b3);

    int a4 = 9;
    int b4 = 10;
    // int c4 = a4 + b4;
    // printf("The sum is %d.\n", c4);
    sum(a4, b4);


    return 0;
}