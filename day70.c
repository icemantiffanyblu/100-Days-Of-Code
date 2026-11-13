#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);

    str[0] = toupper(str[0]);

    printf("%s", str);

    return 0;
}