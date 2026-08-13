//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main() {
    float temp1, temp2;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp1);
    temp2 = (temp1 * 9/5) + 32;
    printf("Temperature in Fahrenheit: %.2f", temp2);
    return 0;
}

    