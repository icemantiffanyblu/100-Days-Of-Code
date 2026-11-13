#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE
};

int main() {
    char *names[] = {"RED", "GREEN", "BLUE"};

    for(int i = RED; i <= BLUE; i++)
        printf("%s = %d\n", names[i], i);

    return 0;
}