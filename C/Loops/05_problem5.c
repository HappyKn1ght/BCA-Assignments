// 5. Write a program to sum first ten natural numbers using while loop

#include <stdio.h>

int main()

{
    int i = 1, sum = 0;

    while (i <= 10)
    {
        /*
        sum = 0 + 1  = 1;
        sum = 1 + 2  = 3;
        sum = 3 + 3  = 6;
        sum = 6 + 4  = 10;
        sum = 10 + 5 = 15;
        sum = 15 + 6 = 21;
        sum = 21 + 7 = 28;
        sum = 28 + 8 = 36;
        sum = 36 + 9 = 45;
        sum = 45 + 10 =55;
        */
        sum += i; // sum = sum + i;
        i++;
    }
    printf("sum of first ten natural numbers is %d", sum);

    return 0;
}
