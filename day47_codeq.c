#include <stdio.h>

int main()
{
    char a[100], b[100];
    int freq[26] = {0};

    scanf("%s", a);
    scanf("%s", b);

    for (int i = 0; a[i] != '\0'; i++)
        freq[a[i] - 'a']++;

    for (int i = 0; b[i] != '\0'; i++)
        freq[b[i] - 'a']--;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}