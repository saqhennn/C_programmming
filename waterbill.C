// Reg Number:BCS-05-0072/2026

#include <stdio.h>

int main()
{
    int units;
    float bill;

    //Prompt the user
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    
    if (units >= 0 && units <= 30)
    {
        bill = units * 20;
    }
    else if (units >= 31 && units <= 60)
    {
        bill = units * 25;
    }
    else if (units > 60)
    {
        bill = units * 30;
    }
  

    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}