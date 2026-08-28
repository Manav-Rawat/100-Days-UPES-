//Write a program to find the LCM of two numbers.

#include <stdio.h>
int main() {
    int a, b, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int gcd = 1;
    for(int i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i; 
        }
    }
    
    lcm = (a * b) / gcd; 
    
    printf("The LCM of %d and %d is: %d\n", a, b, lcm);
    return 0;
}