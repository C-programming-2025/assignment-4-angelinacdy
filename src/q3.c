// Write a C program that checks if a given string is a palindrome using pointers.
#include <stdio.h>
int main() {
    char str[100];
    char *start, *end;
    int length = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    start = str;
    end = str;
    while (*end != '\0') {
        end++;
        length++;
    }
    end--;  
    while (start < end) {
        if (*start != *end) {
            printf("Not a palindrome\n");
            return 0;
        }
        start++;
        end--;
    }
    printf("Palindrome\n");
    return 0;
}
