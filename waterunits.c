//REG NO:PA106/G/28772/25
//NAME:GREGORY STEPHEN OTIENO
//COURSE:BSC SOFTWARE ENGINEERING GROUP B
//DESCRIPTION:A program that checks the user inputs for nwater and calculate the total cost
#include <stdio.h>

int main() {
    int units;
    int bill = 0;

    // Prompt user
    printf("Enter your water units: ");
    scanf("%d", &units);

    if (units <= 30) {
        bill = units * 20;
    } else if (units <= 60) {
        bill = (30 * 20) + (units - 30) * 25;
    } else {
        bill = (30 * 20) + (30 * 25) + (units - 60) * 60;
    }

    // Display result
    printf("Your total bill is: %d KES\n", bill);

    return 0;
}