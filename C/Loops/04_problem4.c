/*
4. What can be done using one type of loop can also be done using the other two
types of loops – true or false?
*/

#include <stdio.h>

int main()

{
    char answer;
    printf("4. What can be done using one type of loop can also be done using the other two\n"
           "types of loops - true or false?\n ");
    printf("Choose Your Answer(t for true or f for false): ");
    scanf(" %c", &answer);

    if (answer == 't')
    {
        printf("Correct!\n");
    }
    else if (answer == 'f')
    {
        printf("Incorrect!\n");
    }
    else
    {
        printf("Invalid input! Please enter 't' or 'f'.\n");
    }
    return 0;
}