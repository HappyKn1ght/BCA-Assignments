/*program to find biggest number.
  By Happy
*/
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Welcome to Biggest Number Finder\n");
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("Enter c:");
    scanf("%d", &c);
    printf("Enter d:");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("a has biggeet number so\n");
        printf("a has won.\n");
    }
    if (b > c && b > d && b > a)
    {
        printf("b has biggeet number so\n");
        printf("b has won.\n");
    }
    if (c > d && c > b && c > a)
    {
        printf("c has biggeet number so\n");
        printf("c has won.\n");
    }
    if (d > a && d > b && d > c)
    {
        printf("d has biggest number so\n");
        printf("d has won.\n");
    }

    return 0;
}
