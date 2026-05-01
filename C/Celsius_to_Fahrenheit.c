#include <stdio.h>

int main()
{
    float Celsius, Fahrenheit;
    printf("Enter Celsius: ");
    scanf("%f", &Celsius);

    Fahrenheit = (9.0 / 5.0 * Celsius) + 32;

    printf("Fahrenheit: %f\n", Fahrenheit);
    return 0;
}
