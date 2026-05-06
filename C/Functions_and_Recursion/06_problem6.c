/*
6. What will the following line produce in a C program:
int a = 4;
printf("%d %d %d \n", a, ++a, a++);
*/
#include <stdio.h>

int main()

{

    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    // 6 6 4
    // 4 5 5
    // both answers are right if compiler's validation order is from left to right then 4 5 5 will be printed and if not then 6 6 4.
    return 0;
}