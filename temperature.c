#include <stdio.h>
float convertToFahrenheit(float celsius);

int main() {
    float celsius, fahrenheit;

    // prompts user ot input temperature in celsius 
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert  the celsius to Fahrenheit
    fahrenheit = convertToFahrenheit(celsius);

    // Output the result
    printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}

float convertToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}