#include <stdio.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    int g;

    scanf("%s", p.name);
    scanf("%d", &g);

    p.gender = g;

    printf("Name: %s\n", p.name);

    if(p.gender == MALE)
        printf("Gender: Male");
    else
        printf("Gender: Female");

    return 0;
}