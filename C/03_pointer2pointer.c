#include<stdio.h>

int main()

{
    int i = 69;
    int*j = &i; // j is a pointer pointing to i.
    int**k =  &j; // k is a pointer pointing to j.

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", **k);
    return 0;
}



