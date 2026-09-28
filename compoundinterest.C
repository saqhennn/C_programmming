/*
Author:Sandra
Reg Number:BCS-05-0072/2026
*/

#include <stdio.h>
#include <math.h>   //needed for the pow() function

int main()
{
    float principal, time, rate, amount, compoundInterest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    printf("Enter the rate (in percent): ");
    scanf("%f", &rate);

    compoundInterest = principal * pow(1 + rate / 100, time);

    printf("Compound Interest = %.4f\n", compoundInterest);

    return 0;
}