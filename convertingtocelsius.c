//BCS-05-0072/2026

#include <stdio.h>

float convertToCelsius(float fahrenheit);

int main() {
    float fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Temperature in Celsius: %.2f\n",
           convertToCelsius(fahrenheit));

    return 0;
}
float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32)*5/9;
}
