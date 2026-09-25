//Find the longest word in a sentence

#include <stdio.h>
#include <string.h>

void find_longest_word(const char *sentence, char *result) {
    int max_len = 0;
    int max_start_idx = 0;
    int current_len = 0;
    int current_start_idx = 0;
    int i = 0;

    while (1) {
        char c = sentence[i];
        
        if (c == ' ' || c == '\t' || c == '\n' || c == '\0') {
            if (current_len > max_len) {
                max_len = current_len;
                max_start_idx = current_start_idx;
            }
            
            if (c == '\0') {
                break;
            }
            
            current_len = 0;
            current_start_idx = i + 1;
        } else {
            current_len++;
        }
        i++;
    }

    strncpy(result, &sentence[max_start_idx], max_len);
    result[max_len] = '\0';
}

int main() {
    char sentence[256];
    char longest_word[256];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    find_longest_word(sentence, longest_word);

    printf("The longest word is: %s\n", longest_word);

    return 0;
}
