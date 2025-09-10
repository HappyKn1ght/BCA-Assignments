#include <stdio.h>

int main()
{
    /*18. Write a program which takes the month number as an input and display number of
          days in that month */

    int month;
    printf("Enter the month number (1 to 12): ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
    {
        printf("January: (31 days).");
        break;
    }
    case 2:
    {
        printf("February: (28 days in a common year, 29 days in a leap year).");
        break;
    }
    case 3:
    {
        printf("March: (31 days).");
        break;
    }
    case 4:
    {
        printf("April: (30 days).");
        break;
    }
    case 5:
    {
        printf("May: (31 days).");
        break;
    }
    case 6:
    {
        printf("June: (30 days).");
        break;
    }
    case 7:
    {
        printf("July: (31 days).");
        break;
    }
    case 8:
    {
        printf("August: (31 days).");
        break;
    }
    case 9:
    {
        printf("September: (30 days).");
        break;
    }
    case 10:
    {
        printf("October: (31 days).");
        break;
    }
    case 11:
    {
        printf("November: (30 days).");
        break;
    }
    case 12:
    {
        printf("December: (31 days).");
        break;
    }
    default:
    {
        printf("Invalid number, Enter 1 to 12.");
    }
    }

    return 0;
}
