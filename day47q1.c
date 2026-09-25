//Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool are_anagrams(const char *str1, const char *str2) {
    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    int counts[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++) {
        counts[(unsigned char)str1[i]]++;
        counts[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (counts[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char str1[100];
    char str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (are_anagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
