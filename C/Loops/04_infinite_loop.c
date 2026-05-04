#include<stdio.h>

int main(){
    int i = 0;
    while(i<10){
        printf("The value of i is %d\n", i);
    // i++; // This line is missing, causing an infinite loop
    }
    return 0;
}