//Write a program to check if a number is a strong number.

#include <stdio.h>
int factorial(int num) {
    if(num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}