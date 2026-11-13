#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    int n;
    scanf("%d", &n);

    enum Role role = n;

    switch(role) {
        case ADMIN:
            printf("Welcome Admin");
            break;

        case USER:
            printf("Welcome User");
            break;

        case GUEST:
            printf("Welcome Guest");
            break;

        default:
            printf("Invalid role");
    }

    return 0;
}