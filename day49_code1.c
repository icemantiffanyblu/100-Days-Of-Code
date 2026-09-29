#include <stdio.h>

int main()
{
    char name[200];

    fgets(name, sizeof(name), stdin);

    printf("%c", name[0]);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ')
            printf("%c\n", name[i + 1]);
    }

    return 0;
}