#include<stdio.h>

int main(){
    int num, i;
    printf("Input Number: ");
    scanf("%d", &num);
    for(i=0; i<=num; i++){
        printf("%d\n", i);
    }

    return 0; 
}