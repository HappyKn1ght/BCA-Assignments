#include <stdio.h>

int main()
{
    int num, i;
    printf("Input Number: ");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        if(i==5){
            //break; ‘break’ statement completely exits the loop
            continue; //‘continue’ statement skips the particular iteration of the loop. 
        }
        printf("%d\n", i);
    }

    return 0;
}