#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    char temp[200];

    scanf("%s", a);
    scanf("%s", b);

    if (strlen(a) != strlen(b))
    {
        printf("False");
        return 0;
    }

    strcpy(temp, a);
    strcat(temp, a);

    if (strstr(temp, b) != NULL)
        printf("Rotation");
    else
        printf("No Rotation");

    return 0;
}