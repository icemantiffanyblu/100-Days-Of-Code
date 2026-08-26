#include<stdio.h>
int main() {
    int a, b;
    printf("Enter A Number: ");
    scanf("%d", &a);

    printf("Enter another number: ");
    scanf("%d", &b);

    printf("\nBefore swap: a = %d, b = % d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: a = %d, b = %d\n", a, b);
    
    return 0;

}