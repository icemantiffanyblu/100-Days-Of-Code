#include <stdio.h>

int main()
{
    long binary;
    printf("Enter a binary number: ");
    scanf("%ld", &binary);
    
    long original = binary;
    long complement = 0;
    long place = 1;
    
    while (binary > 0) {
        int digit = binary % 10;
        if (digit == 0)
            complement += 1 * place;
        else
            complement += 0 * place;
        place *= 10;
        binary /= 10;
    }
    
    printf("1's complement of %ld: %ld\n", original, complement);
    
    return 0;
}