#include <stdio.h>

int main()
{
    float cp, sp;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    
    printf("Enter selling price: ");
    scanf("%f", &sp);
    
    if (sp > cp) {
        float profit = sp - cp;
        float profitPercent = (profit / cp) * 100;
        printf("Profit: Rs. %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", profitPercent);
    }
    else if (sp < cp) {
        float loss = cp - sp;
        float lossPercent = (loss / cp) * 100;
        printf("Loss: Rs. %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", lossPercent);
    }
    else {
        printf("No Profit, No Loss (0%%)\n");
    }
    
    return 0;
}