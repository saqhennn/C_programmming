#include <stdio.h>

int main()
{
    int balance = 50000; 
    int amount;           

    printf("===== ATM WITHDRAWAL =====\n");
    printf("Current balance: KSh %d\n\n", balance);

    //Ask for the first withdrawal amount
    printf("Enter withdrawal amount (0 to exit): KSh ");
    scanf("%d", &amount);

    while (amount > 0 && amount <= balance)
    {
        balance = balance - amount; 
        printf("Withdrawal successful. Remaining balance: KSh %d\n\n", balance);

        //Ask for the next withdrawal amount
        printf("Enter withdrawal amount (0 to exit): KSh ");
        scanf("%d", &amount);
    }


    if (amount > balance)
        printf("\nInsufficient funds.\n",
               amount, balance);
    else
        printf("\nTransaction ended.\n");

    printf("Final balance: KSh %d\n", balance);
    printf("Thank you for using our ATM.\n");

    return 0;
}
