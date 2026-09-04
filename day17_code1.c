#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int original = num;
    int digits = 0;
    int temp = num;
    
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    int sum = 0;
    temp = num;
    while (temp > 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    
    if (sum == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is not an Armstrong number\n", original);
    
    return 0;
}