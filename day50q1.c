//Change the date format from dd/04/yyyy to dd-Apr-yyyy.


#include <stdio.h>

void convertDateFormat(char *date) {
    int day, year;
    
    if (sscanf(date, "%d/04/%d", &day, &year) == 2) {
        printf("%02d-Apr-%04d\n", day, year);
    } else {
        printf("Invalid format\n");
    }
}

int main() {
    char date[] = "25/04/2026";
    convertDateFormat(date);
    return 0;
}
