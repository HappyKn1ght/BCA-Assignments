/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/

#include <stdio.h>

int main()
{
    int Marks;
    printf("Enter Your Marks: ");
    scanf("%d", &Marks);

    if (Marks >= 30)
    {
        printf("The Student has Passed the Examination.\n");
    }
    else
    {
        printf("The Student has Failed the Examination.\n");
    }

    return 0;
}
