// Write a C program that copies the contents of one file to another file.
#include <stdio.h>
int main() {
    FILE *source, *destination;
    char ch;
    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Error: Unable to open source file.\n");
        return 1;
    }
    destination = fopen("destination.txt", "w");
    if (destination == NULL) {
        printf("Error: Unable to create destination file.\n");
        fclose(source);
        return 1;
    }
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    printf("File copied successfully.\n");
    fclose(source);
    fclose(destination);
    return 0;
}
