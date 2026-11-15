//Show that enums store integers by printing assigned values.

#include <stdio.h>
int main () {
    enum Status { SUCCESS = 0, FAILURE = 1, PENDING = 2 };
    enum Status current_status;

    current_status = SUCCESS;
    printf("Current Status: SUCCESS = %d\n", current_status);

    current_status = FAILURE;
    printf("Current Status: FAILURE = %d\n", current_status);

    current_status = PENDING;
    printf("Current Status: PENDING = %d\n", current_status);

    return 0;
}]