#include <stdio.h>

int main()
{
    int n, x;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    int answer = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            answer = i;
            break;
        }
    }

    printf("%d", answer);

    return 0;
}