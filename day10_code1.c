#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c;
    printf("Enter three sides of the triangle : ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b) {
        if (a == b && b == c) {
            printf("It is an Equilateral Triangle\n");
        }
          else if (a == b || b == c || c == a) {
            printf("It is an Isoceles Triangle\n");
          }
          else {
            printf("It is a Scalen Triangle\n");
          }

        float s = (a + b + c) / 2; 
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        
        printf("Area of triangle: %.2f square units\n", area);

    }
    else {
        printf("Invalid triangle! Sum of any two sides must be greater than the third side\n");
    }      

    return 0;

}