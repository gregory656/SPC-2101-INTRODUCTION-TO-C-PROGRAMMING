#include <stdio.h>

int main() {
    float balance, withdrawal;

    // Ask user for initial balance
    printf("Enter your initial balance: ");
    scanf("%f", &balance);

    // Continue withdrawals as long as balance is positive
    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdrawal);

        balance = balance - withdrawal; // Update balance

        if (balance > 0) {
            printf("Balance after withdrawal: %.2f\n", balance);
        } else {
            printf("Balance is now zero or negative: %.2f\n", balance);
            printf("Cannot withdraw anymore.\n");
            break;
        }
    }

    return 0;
}