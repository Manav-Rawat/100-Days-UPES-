//Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <string.h>

char find_first_repeating(const char *str) {
    int seen[26] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            if (seen[index] == 1) {
                return str[i];
            }
            seen[index] = 1;
        }
    }

    return '\0';
}

int main() {
    char message[256];

    printf("Enter a string: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';

    char result = find_first_repeating(message);

    if (result != '\0') {
        printf("First repeating lowercase letter: %c\n", result);
    } else {
        printf("No repeating lowercase letters found.\n");
    }

    return 0;
}
