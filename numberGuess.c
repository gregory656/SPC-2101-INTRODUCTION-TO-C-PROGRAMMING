#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess;

    // Initialize random number generator
    srand(time(NULL));
    secretNumber = (rand() % 20) + 1; // Random number between 1 and 20

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 20. Try to guess it!\n");

    // Loop until the player guesses correctly
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < secretNumber) {
            printf("Too low!\n");
        } else if (guess > secretNumber) {
            printf("Too high!\n");
        } else {
            printf("Congratulations! You guessed it!\n");
        }
    } while (guess != secretNumber);

    return 0;
}