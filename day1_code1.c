#include<stdio.h>
int main() {
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    int y;
    printf("Enter another number : ");
    scanf("%d", &y);
    printf("The sum of %d and %d is %d\n", x, y, x+y);
    return 0;
}