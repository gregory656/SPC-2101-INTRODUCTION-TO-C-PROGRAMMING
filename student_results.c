// student_results.c
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int regNo;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    char choice;

    // Write student records
    fp = fopen("results.dat", "ab"); // append in binary
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    do {
        printf("Enter student name: ");
        fgets(s.name, sizeof(s.name), stdin);
        printf("Enter registration number: ");
        scanf("%d", &s.regNo);
        printf("Enter total marks: ");
        scanf("%f", &s.marks);
        getchar(); // consume newline

        fwrite(&s, sizeof(struct Student), 1, fp);
        printf("Record saved!\n");

        printf("Add another record? (y/n): ");
        scanf(" %c", &choice);
        getchar();
    } while (choice == 'y' || choice == 'Y');
    fclose(fp);

    // Read and display all student records
    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("\n--- Student Records ---\n");
    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("Name: %s", s.name);
        printf("Reg No: %d\n", s.regNo);
        printf("Marks: %.2f\n\n", s.marks);
    }

    fclose(fp);
    return 0;
}