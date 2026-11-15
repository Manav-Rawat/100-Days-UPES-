//Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>
struct Student {
    char name[100];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student student;

    printf("Enter student's name: ");
    scanf("%s", student.name);

    printf("Enter student's roll number: ");
    scanf("%d", &student.roll_no);

    printf("Enter student's marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Data:\n");
    printStudent(student);

    return 0;
}