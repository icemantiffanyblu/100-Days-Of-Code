#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i, isPalindrome = 1;

    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}