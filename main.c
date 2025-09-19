//Name:Gregory Stephen
//Reg No:PA106/G/28772/25
//Description:my 1st C program

#include <stdio.h>//This is a must for all C programmes

int main() {//this is where the code commences

//this is a list of all units for software engineering semester 1 year1
    printf("=====================================\n");
    printf("   Software Engineering - Year 1 Semester 1\n");
    printf("=====================================\n\n");

    printf("1. Introduction to Programming (C Language)\n");
    printf("2. Computer Systems and Organization\n");
    printf("3. Discrete Mathematics\n");
    printf("4. Communication Skills\n");
    printf("5. Fundamentals of ICT\n");
    printf("6. System Analysis And Design\n");
    printf("7.Mathematics For Science\n");

    printf("=====================================\n");
    printf("   End of Semester 1 Units List\n");
    printf("=====================================\n");
//This is vibe coding not part of the exercise
    char name[50];
    char school[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your School: ");
    scanf("%s", school);

    printf("\n--- User Details ---\n");
    printf("Name: %s\n", name);
    printf("School: %s\n", school);

return 0;
}

