// 2. Write a function to convert Celsius temperature into Fahrenheit.

#include <stdio.h>

float CelsiusToFahrenheit(float Celsius);

float CelsiusToFahrenheit(float Celsius)
{
    return ((9.0 / 5.0) * Celsius) + 32;
}
int main()
{
    float Celsius;
    printf("Enter Celsius: ");
    scanf("%f", &Celsius);

    printf("Fahrenheit: %.2f\n", CelsiusToFahrenheit(Celsius));
    return 0;
}