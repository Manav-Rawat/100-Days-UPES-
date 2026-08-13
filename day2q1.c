//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


#include <stdio.h>
int main() {
    int length, breadth, perimeter;
    float area;
    length = 5;
    breadth = 10;
    area = length*breadth;
    perimeter = 2*(length+breadth);
    printf("the value of area is %.2f\n", area);
    printf("the value of perimeter is %.2f\n", perimeter);
    return 0;
}