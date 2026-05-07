#include <stdio.h>

int main()

{
    int i = 77;
    int*j = &i; // j is a pointer pointing to i.
    char k = 'A';
    char*k1 = &k;
    float f = 2.5;
    float*f1 = &f;
    
    // format specifierf for printing pointer address is '%p'
    printf("The address of i is %p\n", &i); 
    printf("The address of i is %p\n", j);  
    printf("The address of k is %p\n", &k);  
    printf("The address of k is %p\n", k1);  
    printf("The address of f is %p\n", &f);  
    printf("The address of f is %p\n", f1);  
    
    printf("The address of i in integer is %u\n", &i); //u for unsigned int
    // this printf address in integer.

    printf("The 'value at address' j is %d\n", *(&j));
    return 0;
}
