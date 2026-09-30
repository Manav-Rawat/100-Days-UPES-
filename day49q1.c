//Print the initials of a name.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printInitials(char *name) {
    int len = strlen(name);
    
    if (len == 0) {
        return;
    }
    if (name[0] != ' ') {
        printf("%c ", toupper(name[0]));
    }

    for (int i = 1; i < len; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ') {
            printf("%c ", toupper(name[i]));
        }
    }
    printf("\n");
}

int main() {
    char name[] = "Buri Buri Zaimon";
    
    printf("Name: %s\n", name);
    printf("Initials: ");
    printInitials(name);
    
    return 0;
}
