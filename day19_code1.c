#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    int gcdA = a, gcdB = b;
    while (gcdA != gcdB) {
        if (gcdA > gcdB)
            gcdA -= gcdB;
        else
            gcdB -= gcdA;
    }
    
    int lcm = (a * b) / gcdA;
    printf("LCM: %d\n", lcm);
    
    return 0;
}