//REG NO:PA106/G/28772/25
//NAME:GREGORY STEPHEN OTIENO
//COURSE:BSC SOFTWARE ENGINEERING GROUP B
//DESCRIPTION:A program that checks the user inputs for nwater and calculate the total cost
#include <stdio.h>

int main() {
    int choice;

    // Display the menu
    printf("Choose a bundle option:\n");
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB   @ 350 KES\n");
    printf("4. 2GB   @ 600 KES\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Process using switch
    switch (choice) {
        case 1:
            printf("You selected: 100MB bundle @ 50 KES\n");
            break;
        case 2:
            printf("You selected: 500MB bundle @ 200 KES\n");
            break;
        case 3:
            printf("You selected: 1GB bundle @ 350 KES\n");
            break;
        case 4:
            printf("You selected: 2GB bundle @ 600 KES\n");
            break;
        default:
            printf("Invalid input! Please select between 1 and 4.\n");
    }

    return 0;
}