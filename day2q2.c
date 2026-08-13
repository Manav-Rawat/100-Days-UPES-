//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main() {
    int radius,circumference;
    float area;
    radius = 5;
    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;
    printf("the value of area is %.2f\n", area);
    printf("the value of circumference is %.2f\n", circumference);
    return 0;
}