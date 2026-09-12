#include <stdio.h>

int main()
{
    int n, digit;
    int freq[10] = {0};

    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        freq[digit]++;

        n = n / 10;
    }

    int max = freq[0];
    int answer = 0;

    for (int i = 1; i < 10; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            answer = i;
        }
    }

    printf("%d", answer);

    return 0;
}