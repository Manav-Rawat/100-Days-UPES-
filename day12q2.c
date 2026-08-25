/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/

#include <stdio.h>
int main() {
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if(units<100)
    {
        bill1 = units * 5
        printf("Your bill is %d\n", bill1);
    }
    else if(units>100 && units<200)
    {
        bill2 = units * 7
        printf("Your bill is %d\n", bill2);
    }
    else if(units>200 && units<300)
    {
        bill3 = units * 10
        printf("Your bill is %d\n", bill3);
    }
    else if(units>300)
    {
        bill4 = units * 12
        printf("Your bill is %d\n", bill4);
    }
    return 0;
}