/*
3. A do while loop is executed:
      a. At least once.
      b. At least twice.
      c. At most once.
*/

#include <stdio.h>

int main()
{
    char answer;
    printf("3. A do while loop is executed:\n"
           "\ta. At least once.\n"
           "\tb. At least twice.\n"
           "\tc. At most once.\n");
    printf("Enter Your answer (a, b or c): ");
    scanf(" %c", &answer);

    if (answer == 'a')
    {
        printf("Correct!");
    }
    else
    {
        printf("Incorrect!");
    }

    return 0;
}
