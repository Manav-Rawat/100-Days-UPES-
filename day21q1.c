//Write a program to swap the first and last digit of a number.

#include <stdio.h>
int main() {
    int n, firstDigit, lastDigit, numDigits = 0, temp, swappedNumber = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    temp = n;
    lastDigit = temp % 10; 
    while(temp > 0) {
        firstDigit = temp % 10; 
        temp /= 10; 
        numDigits++;
    }
    
    swappedNumber = lastDigit * pow(10, numDigits - 1) + (n % (int)pow(10, numDigits - 1)) / 10 * 10 + firstDigit;
    
    printf("The number after swapping the first and last digit is: %d\n", swappedNumber);
    
    return 0;
}