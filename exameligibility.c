//REG NO:PA106/G/28772/25
//NAME:GREGORY STEPHEN OTIENO
//COURSE:BSC SOFTWARE ENGINEERING GROUP B
//DESCRIPTION:A program that checks the user inputs for nwater and calculate the total cost
#include <stdio.h>

int main() {
    float attendance, marks;

    // Input attendance
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    // Input average marks
    printf("Enter average marks: ");
    scanf("%f", &marks);

    // Check eligibility
    if (attendance >= 70 && marks >= 40) {
        printf(" You are eligible for the final exams.\n");
    } else {
        printf(" You are NOT eligible for the final exams.\n");
    }

    return 0;
}