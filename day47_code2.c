#include <stdio.h>

int main()
{
    char str[200];
    int start = 0;
    int currentLength = 0;

    int maxStart = 0;
    int maxLength = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; ; i++)
    {
        if (str[i] != ' ' &&
            str[i] != '\n' &&
            str[i] != '\0')
        {
            currentLength++;
        }
        else
        {
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
                maxStart = start;
            }

            currentLength = 0;
            start = i + 1;

            if (str[i] == '\0')
                break;
        }
    }

    for (int i = maxStart;
         i < maxStart + maxLength;
         i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}