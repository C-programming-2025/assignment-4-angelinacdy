// Write a C program that counts the number of characters, words, and lines in a text file.
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        charCount++;
        if (ch == '\n') {
            lineCount++;
        }
        if (isspace(ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            wordCount++;
        }
    }
    if (charCount > 0 && ch != '\n') {
        lineCount++;
    }
    printf("Characters: %d\n",
