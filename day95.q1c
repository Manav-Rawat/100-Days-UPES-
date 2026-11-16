//Return a structure containing top student's details from a function.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int rollNumber;
    float marks;
};

struct Student getTopStudent(struct Student students[], int n) {
    struct Student topStudent = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }
    return topStudent;
}