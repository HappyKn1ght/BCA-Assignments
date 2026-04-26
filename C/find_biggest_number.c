/*program to find biggest number.
  By Happy
*/
#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Welcome to Biggest Number Finder\n");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    printf("Enter d: ");
    scanf("%d", &d);

    if (a >= b && a >= c && a >= d)
    {
        printf("a has the biggest number and has won!\n");
    }
    else if (b >= a && b >= c && b >= d)
    {
        printf("b has the biggest number and has won!\n");
    }
    else if (c >= a && c >= b && c >= d)
    {
        printf("c has the biggest number and has won!\n");
    }
    else
    {
        printf("d has the biggest number and has won!\n");
    }

    return 0;
}