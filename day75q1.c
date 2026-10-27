//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char line[100];

    file = fopen("info.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter a line of text to append: ");
    fgets(line, sizeof(line), stdin);

    fputs(line, file);
    fclose(file);

    printf("Text appended successfully!\n");
    return 0;
}