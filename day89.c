#include <stdio.h>

enum Size {
    SMALL = 1,
    MEDIUM = 5,
    LARGE = 10
};

int main() {
    printf("SMALL = %d\n", SMALL);
    printf("MEDIUM = %d\n", MEDIUM);
    printf("LARGE = %d\n", LARGE);

    return 0;
}