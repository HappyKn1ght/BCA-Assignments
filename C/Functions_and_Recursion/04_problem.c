/*
7. Write a program using function to print the following pattern (first n lines)
*
* * *
* * * * *
*/
#include <stdio.h>

int main()
{
    int n = 3; // becuz there are three line in problem.
    for (int i = 0; i < 3; i++)
    {
        // no_of_stars = (2*i+1)
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}