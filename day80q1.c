//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>
#define MAX_STUDENTS 100

typedef struct {
    char name[50];
    int roll_number;
    float marks;
} Student;

typedef struct {
    Student students[MAX_STUDENTS];
    int count;
} StudentRecords;

int main() {
    StudentRecords records;
    records.count = 0;

    printf("Enter number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &records.count);
    getchar(); 

    for (int i = 0; i < records.count; i++) {
        printf("Enter name for student %d: ", i + 1);
        fgets(records.students[i].name, sizeof(records.students[i].name), stdin);
        records.students[i].name[strcspn(records.students[i].name, "\n")] = '\0'; // Remove newline

        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &records.students[i].roll_number);

        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &records.students[i].marks);
        getchar(); 
    }

    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Could not open file for writing.\n");
        return 1;
    }

    for (int i = 0; i < records.count; i++) {
        fprintf(file, "%s %d %.2f\n", records.students[i].name, records.students[i].roll_number, records.students[i].marks);
    }
    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Could not open file for reading.\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    printf("----------------\n");
    while (fscanf(file, "%49s %d %f", records.students[records.count].name, &records.students[records.count].roll_number, &records.students[records.count].marks) == 3) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", records.students[records.count].name, records.students[records.count].roll_number, records.students[records.count].marks);
        records.count++;
    }
    
    fclose(file);
    return 0;
}