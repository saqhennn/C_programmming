/*
Author:Sandra
Reg Number:BCS-05-0072/2026
*/

#include <stdio.h>

int main()
{
    float height;               //height in meters or centimeters
    double bankBalance;         //bank balance in Kenya shillings
    char phoneNumber[20];       //phone number stored as a string

    //Prompt the user
    printf("Enter your height (in meters or centimeters): ");
    scanf("%f", &height);

    printf("Enter your bank balance (in Kenya shillings):\t \n");
    scanf("%lf", &bankBalance);

    printf("Enter your phone number:\t \n");
    scanf("%s", &phoneNumber);

	
    //Display the values
    printf("\n....USER DETAILS.... \n");
    printf("Height: %f\n", height);
    printf("Bank Balance:KSh %lf\n", bankBalance);
    printf("Phone Number:  %s\n", phoneNumber);

    return 0;
}