#include <stdio.h>
int main(void)
{
    float celsius;

    printf("Enter the temperature in Celcius: ");
    scanf("%f", &celsius);

    printf("Temperature in Celsius: %.2fC\n", celsius);
    printf("Temperature in Farenheit: %.2fF", (celsius * 9/5) + 32);

    return 0;

}