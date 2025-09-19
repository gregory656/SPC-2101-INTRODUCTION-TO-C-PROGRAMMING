//Name:GREGORY STEPHEN OTIENO
//REGNO:PA106/G/28772/25
//DESCRIPTION:This is a loan checker programm designed by steve 
#include <stdio.h> //This is a must for C prorammes

int main() { //This is where the programme starts/initialized
    int age;
    float income;

    // Prompt user for input
    printf("Enter your age: ");
    scanf("%d", &age); //The & is very important

    printf("Enter your annual income: ");
    scanf("%f", &income);//%f is a float

    // Loan check
    if (age <= 21) {
        printf(" You must be above 21 years old to apply for a loan.\n");//if,else if and else are used to controll the flow
    } 
    else if (income < 21000) {
        printf(" Your annual income must be at least 210,000.\n");
    } 
    else {
        printf(" Congratulations! You are eligible for the loan.\n");
    }

    return 0; //not mandatory but this tells the computer the programm has been executed succesfully
}