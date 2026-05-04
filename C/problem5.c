/* Write a program to determine whether a character entered by the user is
   lowercase or not. */
// ASCII: https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

#include <stdio.h>

int main()
{
    
    char character;
    printf("enter character: ");
    scanf("%c", &character);
    printf("The character is %c,\n", character);
    printf("The value of character is %d,\n", character);
    if (character >= 97 && character <= 122)
    {
        printf("entered character is lowercase.\n");
    }
    else
    {
        printf("entered character is not lowercase.");
    }

    return 0;
}