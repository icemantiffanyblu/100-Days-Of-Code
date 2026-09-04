#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int original = num;
    
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    
    printf("Sum of digits of %d: %d\n", original, sum);
    
    return 0;
}