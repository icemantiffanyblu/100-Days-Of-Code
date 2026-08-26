#include<stdio.h>
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("Sum of first %d natural numbers: %d\n", n, sum);

    return 0;
}