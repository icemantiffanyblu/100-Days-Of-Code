#include <stdio.h>

int main()
{
    float percentage;
    printf("Enter percentage (0-100): ");
    scanf("%f", &percentage);
    
    if (percentage >= 90) {
        printf("Grade: A (Excellent)\n");
    }
    else if (percentage >= 80) {
        printf("Grade: B (Good)\n");
    }
    else if (percentage >= 70) {
        printf("Grade: C (Average)\n");
    }
    else if (percentage >= 60) {
        printf("Grade: D (Below Average)\n");
    }
    else if (percentage >= 50) {
        printf("Grade: E (Pass)\n");
    }
    else {
        printf("Grade: F (Fail)\n");
    }
    
    return 0;
}