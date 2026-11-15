//Define a struct with enum Gender and print person's gender.

#include <stdio.h>
enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[100];
    enum Gender gender;
};

int main() {
    struct Person person1 = {"Alice", FEMALE};
    struct Person person2 = {"Bob", MALE};
    struct Person person3 = {"Charlie", OTHER};

    printf("Person 1: %s, Gender: %d\n", person1.name, person1.gender);
    printf("Person 2: %s, Gender: %d\n", person2.name, person2.gender);
    printf("Person 3: %s, Gender: %d\n", person3.name, person3.gender);

    return 0;
}