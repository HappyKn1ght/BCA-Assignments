//Writing A Program To Calculate The Area Of Triangle
#include <stdio.h>

int main(){
    int Base,Height,Area;
    printf("Enter Base:");
    scanf("%d", &Base);
    
    printf("Enter Height: ");
    scanf("%d", &Height);
    Area = 0.5*Base*Height; //From Th e Formula Of Area Of Triangle is 1/2*Base*Height
    printf("The Area Of Triangle is %d", Area);
    return 0;
}