//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>
int main() {
    char s[100], t[100];
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);
    
    int n = strlen(s);
    if (n != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += s[i];
        sum -= t[i];
    }
    
    if (sum == 0) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }
    return 0;
}

