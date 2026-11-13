#include <stdio.h>

int main() {
    char source[50], destination[50];
    char ch;

    scanf("%s", source);
    scanf("%s", destination);

    FILE *fp1 = fopen(source, "r");
    FILE *fp2 = fopen(destination, "w");

    if(fp1 == NULL) {
        printf("Source file not found");
        return 0;
    }

    while((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp2);

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully.");

    return 0;
}