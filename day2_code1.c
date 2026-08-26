#include<stdio.h>
int main() {
    float r;
    printf("Enter the radius of the Circle :");
    scanf("%f",&r);
    float pi = 3.14;
    float area = pi * r * r;

    printf("The area of the Circle is : %.2f\n",area);
    float circumference = 2 * pi * r;
    printf("The circumference of the circle is : %.2f\n",circumference);

    return 0;

}