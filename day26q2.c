/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

* */

#include <stdio.h>

int main() {
    int total_groups = 5;
    int stars_in_group;

   
    for (int i = 1; i <= total_groups; i++) {
        
       
        if (i <= 3) {
            stars_in_group = (2 * i) - 1; 
        } else {
            stars_in_group = (2 * (total_groups - i + 1)) - 1; 
        }

       
        for (int j = 0; j < stars_in_group; j++) {
            printf("*\n");
        }

        
        if (i < total_groups) {
            printf("\n");
        }
    }

    return 0;
}

