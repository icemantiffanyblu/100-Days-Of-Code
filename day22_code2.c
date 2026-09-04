#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    int num = 1, den = 1;
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        }
        else {
            num = 2 * i - 1;
            den = 2 * i - 2;
            sum += (float)num / den;
        }
    }
    
    printf("Sum of series: %.4f\n", sum);
    
    return 0;
}