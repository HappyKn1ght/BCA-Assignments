// 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2.

#include <stdio.h>

float force(float mass);
float force(float mass){
    return mass*9.8;
}

int main()
{
    float mass;
    printf("Enter mass: ");
    scanf("%f", &mass);

    printf("The Value of force is %.2f m/s2.\n", force(mass));
    return 0;
}