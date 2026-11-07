//Assign explicit values starting from 10 and print them.
#include <stdio.h>
enum Numbers {
    TEN = 10,
    ELEVEN,
    TWELVE,
    THIRTEEN,
    FOURTEEN,
    FIFTEEN
};

int main() {
    printf("Values:\n");
    printf("TEN: %d\n", TEN);
    printf("ELEVEN: %d\n", ELEVEN);
    printf("TWELVE: %d\n", TWELVE);
    printf("THIRTEEN: %d\n", THIRTEEN);
    printf("FOURTEEN: %d\n", FOURTEEN);
    printf("FIFTEEN: %d\n", FIFTEEN);

    return 0;
}