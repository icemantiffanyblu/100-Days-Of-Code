#include <stdio.h>

int main()
{
    int n, x;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    int low = 0;
    int high = n - 1;
    int index = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
        {
            index = mid;
            break;
        }
        else if (x > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (index == -1)
        printf("-1");
    else
        printf("Found at index %d", index);

    return 0;
}