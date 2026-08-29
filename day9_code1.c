#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Enter coefficients a, b, c of quadratic equation ax² + bx + c = 0: ");
    scanf("%f %f %f", &a, &b, &c);
    
    float discriminant = (b * b) - (4 * a * c);
    
    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct real roots:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        float root = -b / (2 * a);
        printf("Two equal real roots (one repeated root):\n");
        printf("Root = %.2f\n", root);
    }
    else {
        printf("Complex roots (no real roots):\n");
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
    
    return 0;
}