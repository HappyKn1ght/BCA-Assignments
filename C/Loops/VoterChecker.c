#include <stdio.h>
#include <string.h>

int main()
{
    printf("WELCOME TO |VoterChecker|\nPLEASE PROVIDE THE FOLLOWING DETAILS \nTO CHECK WHETHER YOU CAN VOTE OR NOT.\n");
    int age, firstname[50], lastname[50];
    printf("Enter Your First Name: ");
    scanf("%s", &firstname);
    printf("Enter Your Last Name: ");
    scanf("%s", &lastname);
    printf("Enter Your Age: ");
    scanf("%d", &age);

    if (age >= 18)
    {

        printf("Mr.%s %s\nYou're %d years old and you're an Adult so\nYou can Vote.\n", firstname, lastname, age);
    }
    else
    {
        printf("Mr.%s %s\nYou're %d years old and you're not an adult so\n You can't Vote.\n", firstname, lastname, age);
    }
    printf("Thank you for your time\n\tHAVE A GOOD DAY.\n");
    printf("press enter to exit...");
    getchar();
    getchar();

    return 0;
}