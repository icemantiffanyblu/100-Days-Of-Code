#include <stdio.h>
#include <string.h>

int main()
{
    char name[200];
    int lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("%c. ", name[0]);

    for (int i = 0; i < lastSpace; i++)
    {
        if (name[i] == ' ')
            printf("%c. ", name[i + 1]);
    }

    printf("%s\n", &name[lastSpace + 1]);

    return 0;
}