#include <stdio.h>

int main() {
    int a, b, t;
    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("\nBefore swap: a = %d, b = %d\n", a, b);
    
    t = a;
    a = b;
    b = t;

    printf("After swap: a = %d, b = %d\n", a, b);
    
    return 0;
}