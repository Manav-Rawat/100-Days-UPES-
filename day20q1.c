//Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main() {
    int n, product = 1, hasOddDigit = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while(n != 0) {
        int digit = n % 10; 
        if(digit % 2 != 0) { 
            product *= digit; 
            hasOddDigit = 1; 
        }
        n /= 10; 
    }
    
    if(hasOddDigit) {
        printf("The product of odd digits is: %d\n", product);
    } else {
        printf("There are no odd digits in the number.\n");
    }
    
    return 0;
}