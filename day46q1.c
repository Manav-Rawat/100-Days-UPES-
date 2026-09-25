//Remove all vowels from a string.

#include <stdio.h>
#include <string.h>

int is_vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void remove_vowels(char *str) {
    int write_index = 0;
    
    for (int read_index = 0; str[read_index] != '\0'; read_index++) {
        if (!is_vowel(str[read_index])) {
            str[write_index] = str[read_index];
            write_index++;
        }
    }
    
    str[write_index] = '\0';
}

int main() {
    char message;

    printf("Enter a string: ");
    fgets(message, sizeof(message), stdin);

    message[strcspn(message, "\n")] = '\0';

    remove_vowels(message);

    printf("String after removing vowels: %s\n", message);
    return 0;
}
