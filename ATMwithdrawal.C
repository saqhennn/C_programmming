//BCS-05-0072/2026

#include <stdio.h>

int main() {
    float balance, amount;

    printf("Enter your account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);

        balance = balance - amount;

        printf("Remaining balance: %.2f\n", balance);
    }

    printf("Withdrawals stopped.\n");

    return 0;
}
