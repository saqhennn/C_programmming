/*
Author:Sandra
Reg Number:BCS-05-0072/2026
*/

#include <stdio.h>

int main()
{
    float principal, time, rate, simpleInterest;

	//prompt the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    printf("Enter the rate (in percent): ");
    scanf("%f", &rate);

    simpleInterest = (principal * time * rate) / 100;

    printf("Simple Interest = %f\n", simpleInterest);

    return 0;
}