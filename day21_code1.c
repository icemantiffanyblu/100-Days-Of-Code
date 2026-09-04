#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int original = num;
    int lastDigit = num % 10;
    int digits = (int)log10(num);
    int firstDigit = num / (int)pow(10, digits);
    
    int result = num;
    result = result - firstDigit * (int)pow(10, digits) + lastDigit * (int)pow(10, digits);
    result = result - lastDigit + firstDigit;
    
    printf("Original: %d\n", original);
    printf("After swapping: %d\n", result);
    
    return 0;
}