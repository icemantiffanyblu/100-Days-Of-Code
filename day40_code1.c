#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int d = 0; d < r + c - 1; d++) {
        int i, j;

        if (d < c) {
            i = 0;
            j = d;
        } else {
            i = d - c + 1;
            j = c - 1;
        }

        while (i < r && j >= 0) {
            printf("%d", a[i][j]);

            if (!(d == r + c - 2 && i == r - 1))
                printf(" ");

            i++;
            j--;
        }
    }

    return 0;
}