#include <stdio.h>
#include <math.h>

int main() {
    float number, roundingoff;

    printf("Enter the decimal number: ");
    scanf("%f", &number);

    roundingoff = floor(number * 10000 + 0.5) / 10000;

    printf("Rounded: %.4f\n", roundingoff);

    return 0;
}
