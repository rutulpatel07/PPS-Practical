#include <stdio.h>

int main(){
    int T = 32;
    const float t = 1.8;

    float celsius, fahrenheit;

    // Get Celsius temperature from user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * t) + T;

    // Display the result

    printf("\nCelsius: %.2f°C", celsius);
    printf("\nFahrenheit: %.2f°F", fahrenheit);

    return 0;
}