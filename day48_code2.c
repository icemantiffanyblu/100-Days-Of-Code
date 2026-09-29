#include <stdio.h>

int main()
{
    char str[200];

    fgets(str, sizeof(str), stdin);

    int start = 0;

    for (int i = 0; ; i++)
    {
        if (str[i] == ' ' ||
            str[i] == '\n' ||
            str[i] == '\0')
        {
            int left = start;
            int right = i - 1;

            while (left < right)
            {
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;

                left++;
                right--;
            }

            start = i + 1;

            if (str[i] == '\0')
                break;
        }
    }

    printf("%s", str);

    return 0;
}