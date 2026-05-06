// 11. Implement 10 using other types of loops.
/*
#include <stdio.h> using for loop (my fav)

int main()

{
    int i, num;
    int not_prime = 0;
    printf("Enter The Number: ");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        not_prime = 1;
    }
    else
    {

        for (i = 2; i < num; i++)
        {
            if (num % i == 0 && num != 2)
            {
                not_prime = 1;
                break;
            }
        }
    }

    if (not_prime)
    {
        printf("%d is not prime\n", num);
    }
    else
    {
        printf("%d is prime\n", num);
    }
    return 0;
}
*/

/*
#include <stdio.h> using while loop

int main()

{
    int i = 2, num;
    int not_prime = 0;
    printf("Enter The Number: ");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        not_prime = 1;
    }
    else
    {

        while (i < num)
        {
            if (num % i == 0 && num != 2)
            {
                not_prime = 1;
                break;
            }
            i++;
        }
    }

    if (not_prime)
    {
        printf("%d is not prime\n", num);
    }
    else
    {
        printf("%d is prime\n", num);
    }
    return 0;
}
*/

/*
#include <stdio.h> using do-while loop

int main()

{
    int i = 2, num;
    int not_prime = 0;
    printf("Enter The Number: ");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        not_prime = 1;
    }
    else
    {

        do
        {
            if (num % i == 0 && num != 2)
            {
                not_prime = 1;
                break;
            }
            i++;
        } while (i < num);
    }

    if (not_prime)
    {
        printf("%d is not prime\n", num);
    }
    else
    {
        printf("%d is prime\n", num);
    }
    return 0;
}
*/
