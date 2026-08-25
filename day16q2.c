//Write a program to check if a number is a palindrome.

#include <stdio.h>
int main() {
    int n, original, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    original = n; // Store the original number for comparison
    
    while(n != 0) {
        reversed = reversed * 10 + n % 10; // Reverse the number
        n /= 10; // Remove the last digit
    }
    
    if(original == reversed) {
        printf("The number %d is a palindrome.\n", original);
    } else {
        printf("The number %d is not a palindrome.\n", original);
    }
    
    return 0;
}