//Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isRotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) {
        return 0;
    }

    char *temp = (char *)malloc(2 * len1 + 1);
    if (temp == NULL) {
        return 0;
    }

    strcpy(temp, s1);
    strcat(temp, s1);

    int res = (strstr(temp, s2) != NULL);
    free(temp);

    return res;
}

int main() {
    char *s1 = "abcd";
    char *s2 = "cdab";

    if (isRotation(s1, s2)) {
        printf("Yes, they are rotations of each other.\n");
    } else {
        printf("No, they are not rotations of each other.\n");
    }

    return 0;
}
