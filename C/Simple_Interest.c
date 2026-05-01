/*Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.*/

#include <stdio.h>
int main()
{
    float P, R, T , SimpleInterest;
    printf("Enter Amount: ");
    scanf("%f", &P);

    printf("Enter Interest Rate(in percentage): ");
    scanf("%f", &R);

    printf("Enter Time(in year): ");
    scanf("%f", &T);

    SimpleInterest = ((P*R*T)/100);

    printf("The Total Simple Interest: %.2f", SimpleInterest);

    return 0;
}