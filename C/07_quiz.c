#include <stdio.h>

int main()
{
    /*
    Quick Quiz: Write a program to find the grade of a student given his marks based on below:
    90 – 100 => A
    80 – 89  => B
    70 – 79  => C
    60 – 69  => D
    50 – 59  => E
    <50      => F
    */

    int Marks;
    printf("Enter Marks: ");
    scanf("%d", &Marks);

    if (Marks >= 90 && Marks <= 100)
    {
        printf("Your Grade is A.\n");
    }
    else if (Marks >= 80 && Marks < 90)
    {
        printf("Your Grade is B.\n");
    }
    else if (Marks >= 70 && Marks < 80)
    {
        printf("Your Grade is C.\n");
    }
    else if (Marks >= 60 && Marks < 70)
    {
        printf("Your Grade is D.\n");
    }
    else if (Marks >= 50 && Marks < 60)
    {
        printf("Your Grade is E.\n");
    }
    else if (Marks < 50)
    {
        printf("Your Grade is F.\n");
    }
    else
    {
        printf("Invalid Marks.\n");
    }

    return 0;
}
