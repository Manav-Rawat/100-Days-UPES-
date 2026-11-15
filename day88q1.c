//Print all enum names and integer values using a loop.

#include <stdio.h>
int main() {
    enum Color { RED, GREEN, BLUE, YELLOW, ORANGE };
    enum Color color;

    printf("Enum Color Names and Values:\n");
    for (color = RED; color <= ORANGE; color++) {
        switch (color) {
            case RED:
                printf("RED = %d\n", RED);
                break;
            case GREEN:
                printf("GREEN = %d\n", GREEN);
                break;
            case BLUE:
                printf("BLUE = %d\n", BLUE);
                break;
            case YELLOW:
                printf("YELLOW = %d\n", YELLOW);
                break;
            case ORANGE:
                printf("ORANGE = %d\n", ORANGE);
                break;
            default:
                printf("Unknown color!\n");
        }
    }

    return 0;
}
