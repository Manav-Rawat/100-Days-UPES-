//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printFormatted(char *name) {
    int len = strlen(name);
    int last_space = -1;

    for (int i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            last_space = i;
            break;
        }
    }

    if (last_space == -1) {
        printf("%s\n", name);
        return;
    }

    printf("%c. ", toupper(name[0]));

    for (int i = 1; i < last_space; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ') {
            printf("%c. ", toupper(name[i]));
        }
    }

    printf("%s\n", &name[last_space + 1]);
}

int main() {
    char name[] = "Buri Buri Zaimon";
    printFormatted(name);
    return 0;
}
