//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
int main() {
    enum UserRole { ADMIN, USER, GUEST };
    enum UserRole role;

    int input;
    printf("Select your role:\n");
    printf("0. Admin\n");
    printf("1. User\n");
    printf("2. Guest\n");
    printf("Enter your choice (0-2): ");
    scanf("%d", &input);

    if (input < 0 || input > 2) {
        printf("Invalid choice!\n");
        return 1;
    }

    role = (enum UserRole)input;

    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have minimal access.\n");
            break;
        default:
            printf("Invalid role!\n");
            return 1;
    }

    return 0;
}