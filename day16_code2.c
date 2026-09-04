#include <stdio.h>

int main()
{
    int num, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int original = num;
    
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    if (original == reversed)
        printf("%d is a palindrome\n", original);
    else
        printf("%d is not a palindrome\n", original);
    
    return 0;
}