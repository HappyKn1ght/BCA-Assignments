//6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

/* using while loop
#include <stdio.h>
int main()

{
    int i = 1;
    int sum = 0;
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    printf("sum of first ten natural number is %d.\n", sum);
    return 0;
}
*/
/* using do-while loop
#include <stdio.h>

int main()

{
    int i = 1;
    int sum = 0;
    do
    {
        sum += i;
        i++;
    }
    while (i <= 10);
    printf("sum of first ten natural number is %d.\n", sum);
    return 0;
}
*/

#include <stdio.h>

int main()

{
    int i = 1;
    int sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum += i;
        
    }
    printf("sum of first ten natural number is %d.\n", sum);
    return 0;
}


