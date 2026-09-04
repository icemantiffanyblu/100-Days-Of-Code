#include <stdio.h>

int main()
{
    int num;
    long product = 1;
    int found = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int original = num;
    
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            found = 1;
        }
        num /= 10;
    }
    
    if (found)
        printf("Product of odd digits of %d: %ld\n", original, product);
    else
        printf("No odd digits found in %d\n", original);
    
    return 0;
}