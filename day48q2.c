//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWords(char *sentence) {
    char *word_start = sentence;
    char *temp = sentence;

    while (*temp) {
        temp++;
        if (*temp == ' ' || *temp == '\0') {
            reverse(word_start, temp - 1);
            word_start = temp + 1;
        }
    }
}

int main() {
    char sentence[] = "Hello World from C";
    
    printf("Original: %s\n", sentence);
    reverseWords(sentence);
    printf("Reversed: %s\n", sentence);
    
    return 0;
}
