#include<stdio.h>

int main(){
    int i = 5; //5
    printf("The Value of i is %d\n", i);
    i = i + 5; //10
    printf("The Value of i is %d\n", i);
    
    printf("The Value of i is %d\n", i++); //10
    printf("The Value of i is %d\n", i); //11
    printf("The Value of i is %d\n", ++i); //12
    
    // i++ prints i first and then increment  i (Post increment operator)
    // ++i increment i firsts and then prints i (pre increment operator)
    i +=2; // same as i = i+2;
    printf("The Value of i is %d\n", i); 
    return 0;
}