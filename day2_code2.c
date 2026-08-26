#include<stdio.h>
int main() {
    float l;
    printf("\nEnter the length of rectangle : ");
    scanf("%f" ,&l);
    float b;
    printf("\nEnter the breadth of the rectangle :");
    scanf("%f" ,&b);
    float area = l*b;
    printf("\nThe area of the rectangle is : %.2f",area);
     float perimeter = 2*(l+b);
    printf("\nThe perimeter of the rectangle is : %.2f",perimeter);
    return 0;
}