//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main() {
    int n, binary[32], i = 0;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    
    while(n > 0) {
        binary[i] = n % 10; 
        n /= 10; 
        i++;
    }
    
    printf("1's complement of the binary number is: ");
    for(int j = i - 1; j >= 0; j--) {
        if(binary[j] == 0) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
    
    return 0;
}