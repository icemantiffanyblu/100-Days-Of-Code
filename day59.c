#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    int maxSum = 0;

    for(int i = 0; i < k; i++)
        maxSum += a[i];

    int sum = maxSum;

    for(int i = k; i < n; i++) {
        sum += a[i] - a[i-k];

        if(sum > maxSum)
            maxSum = sum;
    }

    printf("%d", maxSum);

    return 0;
}