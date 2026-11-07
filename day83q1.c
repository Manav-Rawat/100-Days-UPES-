//Create an enum for months and print how many days each month has.

#include <stdio.h>
enum Months {
    JANUARY = 31,
    FEBRUARY = 28,
    MARCH = 31,
    APRIL = 30,
    MAY = 31,
    JUNE = 30,
    JULY = 31,
    AUGUST = 31,
    SEPTEMBER = 30,
    OCTOBER = 31,
    NOVEMBER = 30,
    DECEMBER = 31
};
int main() {
    printf("Days in each month:\n");
    printf("January: %d days\n", JANUARY);
    printf("February: %d days\n", FEBRUARY);
    printf("March: %d days\n", MARCH);
    printf("April: %d days\n", APRIL);
    printf("May: %d days\n", MAY);
    printf("June: %d days\n", JUNE);
    printf("July: %d days\n", JULY);
    printf("August: %d days\n", AUGUST);
    printf("September: %d days\n", SEPTEMBER);
    printf("October: %d days\n", OCTOBER);
    printf("November: %d days\n", NOVEMBER);
    printf("December: %d days\n", DECEMBER);

    return 0;
}