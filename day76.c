#include <stdio.h>

int main() {
    char filename[50];
    char ch;

    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");

    if(fp == NULL) {
        printf("File does not exist.");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);

    return 0;
}