//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
int main() {
    int n, original, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    original = n;
    
    int temp = n;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }
    
    temp = n;
    while(temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits); // Use pow function to raise digit to the power of digits
        temp /= 10; // Remove the last digit
    }
    
    if(original == sum) {
        printf("The number %d is an Armstrong number.\n", original);
    } else {
        printf("The number %d is not an Armstrong number.\n", original);
    }
    
    return 0;
}