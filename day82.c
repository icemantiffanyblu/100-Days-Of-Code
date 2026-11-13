#include <stdio.h>

enum Light {
    RED,
    YELLOW,
    GREEN
};

int main() {
    int choice;
    scanf("%d", &choice);

    enum Light signal = choice;

    switch(signal) {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;

        default:
            printf("Invalid");
    }

    return 0;
}