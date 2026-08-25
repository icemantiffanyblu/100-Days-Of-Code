#include <stdio.h>

int main()
{
    float c;
    printf("Enter the cost price of the item : ");
    scanf("%f", &c);
    
    float s;
    printf("Enter the selling price of the item : ");
    scanf("%f", &s);
    
    if (s > c) {
        printf("You have made Profit of ₹ %.2f\n", s - c);
    }
    else if (s < c) {
        printf("You have made loss of ₹ %.2f\n", c - s);
    }
    else {
        printf("No profit, No loss\n");
    }

    return 0;
}