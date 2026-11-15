//Find and print the student with the highest marks.

#include <stdio.h>
struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    struct Student top_student = students[0];
    for (int i = 1; i < 5; i++) {
        if (students[i].marks > top_student.marks) {
            top_student = students[i];
        }
    }

    printf("\nStudent with the highest marks:\n");
    printf("Name: %s\n", top_student.name);
    printf("Roll Number: %d\n", top_student.roll_no);
    printf("Marks: %.2f\n", top_student.marks);

    return 0;
}