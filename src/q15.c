// Write a C program that stores student records (name, roll number, and marks) into a 
// file and then reads and displays all stored records.
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    FILE *fp;
    struct Student s;
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    fp = fopen("students.dat", "w");
    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s.name);

        printf("Roll Number: ");
        scanf("%d", &s.roll);

        printf("Marks: ");
        scanf("%f", &s.marks);
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
    fp = fopen("students.dat", "r");
    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }
    printf("\nStored Student Records:\n");
    printf("Name\tRoll\tMarks\n");
    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) != EOF) {
        printf("%s\t%d\t%.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
    return 0;
}
