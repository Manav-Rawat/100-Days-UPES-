//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main() {
    int n, binary[32], i = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if(n < 0) {
        printf("Binary representation is not defined for negative numbers.\n");
    } else {
        while(n > 0) {
            binary[i] = n % 2;
            n /= 2;
            i++;
        }
        
        printf("The binary representation is: ");
        for(int j = i - 1; j >= 0; j--){
            printf("%d", binary[j]);
        }
        printf("\n");
    }
    
    return 0;
}