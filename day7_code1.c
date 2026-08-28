#include<stdio.h>
int main() {
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        printf("%d It is a Leap Year\n", year);
    }
    else {
        printf("%d It is not a leap year\n", year);
    }
       return 0;

}