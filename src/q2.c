// Write a C program that reverses an array of characters using pointers.
#include <stdio.h>
int main() {
    char arr[] = "Hello";
    char *start = arr;
    char *end = arr;
    while (*end != '\0') {
        end++;
    }
    end--;  
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("Reversed string: %s\n", arr);
    return 0;
}
