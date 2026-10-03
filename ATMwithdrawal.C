//Reg Number:BCS-05-0072/2026

#include <stdio.h>

int main()
{
    double balance = 50000;  
    float amount;
    
    while (amount>0 && amount<=balance){
    	printf("Withdrawal Amount:Ksh");
    	scanf("%f", &amount);
    	
		if (amount==0){
			printf("Transaction Cancelled. \n");
		}
		if (amount<0){
			printf("Invalid Amount. \n");
		}
		if (amount>balance){
			printf("Insufficient Amount. \n", balance);
		}
		else {
			balance = balance - amount;
            printf("Withdrawal Successful.\n", balance);
		}
		
		 printf("Final Balance: KSh %.2f\n", balance);

	}
	return 0;
}
    