#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);

    if (age > 60)
    {
        printf("You can drive,\nand you are a senior citizen.\n");
    }
    else if (age > 30)
    {
        printf("You can drive,\nand you are an elder.\n");
    }
    else if (age > 18)
    {
        printf("You can drive.\n");
    }
    else
    {
        printf("You cannot drive.\n");
    }

    return 0;
}
