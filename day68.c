#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;

    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        sum += x;
    }

    int expected = n * (n + 1) / 2;

    printf("%d", expected - sum);

    return 0;
}