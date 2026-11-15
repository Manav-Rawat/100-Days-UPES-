//Store details of 5 students in an array of structures and print all.

#include <stdio.h>
int main() {
    struct Student {
        char name[100];
        int roll_no;
        float marks;
    };

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

    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: Name: %s, Roll Number: %d, Marks: %.2f\n",
               i + 1, students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}