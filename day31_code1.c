#include <stdio.h>

int main()
{
    int n, x, index = -1;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
        printf("-1");
    else
        printf("Found at index %d", index);

    return 0;
}
