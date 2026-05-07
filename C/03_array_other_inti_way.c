#include <stdio.h>

int main()
{   
    int marks[5] = {45, 55, 65, 75, 85};
    for (int i = 0; i < 5; i++)
    {
        printf("Value at %d is %d\n", i, marks[i]);
    }
    return 0;
}