//Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main() {
    int num, digit, maxDigit = 0, maxCount = 0;
    int count[10] = {0}; 

    printf("Enter an integer number: ");
    scanf("%d", &num);


    while (num != 0) {
        digit = num % 10; 
        count[digit]++;   
        num /= 10;        
    }

   
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("The digit that occurs the most times is: %d (occurs %d times)\n", maxDigit, maxCount);

    return 0;
}