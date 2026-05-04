/*Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
Income Slab         Tax                 
3.0L – 7.0L         5%                       
7.0L - 10.0L        10%                   
10.0L - 12.0L       15%  
12.0L  - 15.0L      20%
above 15.0L         30%   
Note that there is no tax below 3L. Take income amount as an input from the user.*/

#include <stdio.h>

int main() {
    float income, tax = 0; 
    printf("Welcome to Our TaxCalculator\n");
    printf("Enter Your Income: ");
    scanf("%f", &income);

    if (income < 300000) {
        tax = 0; 
    } 
    else if (income >= 300000 && income <= 700000) {
        tax = (income - 300000) * 0.05;
    } 
    else if (income > 700000 && income <= 1000000) {
        tax = (700000 - 300000) * 0.05 + (income - 700000) * 0.10; 
    } 
    else if (income > 1000000 && income <= 1200000) {
        tax = (700000 - 300000) * 0.05 + (1000000 - 700000) * 0.10 + (income - 1000000) * 0.15; 
    } 
    else if (income > 1200000 && income <= 1500000) {
        tax = (700000 - 300000) * 0.05 + (1000000 - 700000) * 0.10 + (1200000 - 1000000) * 0.15 + (income - 1200000) * 0.20; 
    } 
    else { 
        tax = (700000 - 300000) * 0.05 + (1000000 - 700000) * 0.10 + (1200000 - 1000000) * 0.15 + (1500000 - 1200000) * 0.20 + (income - 1500000) * 0.30; 
    }

    printf("The total tax you need to pay is %.2f\n\n\t\tHave a good day!", tax);

    return 0;
}
