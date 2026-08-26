#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time;
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter rate of interest (per annum): ");
    scanf("%f", &rate);
    
    printf("Enter time period (in years): ");
    scanf("%f", &time);
    
    float simpleInterest = (principal * rate * time) / 100;
    float amountSI = principal + simpleInterest;
    
    printf("\nSimple Interest\n");
    printf("Interest: %.2f\n", simpleInterest);
    printf("Total Amount: %.2f\n", amountSI);
    
    float amountCI = principal * pow(1 + (rate / 100), time);
    float compoundInterest = amountCI - principal;
    
    printf("\nCompound Interest\n");
    printf("Interest: %.2f\n", compoundInterest);
    printf("Total Amount: %.2f\n", amountCI);
    
    return 0;
}