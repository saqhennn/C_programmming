/*
Author:Sandra
Reg Number:BCS-05-0072/2026
*/

#include <stdio.h>

int main()
{
    int bookID, dueDate, returnDate;
    int daysOverdue, fineRate, fineAmount;

    //prompt the user
    printf("Enter Book ID: ");
    scanf("%d", &bookID);

    printf("Enter Due Date: ");
    scanf("%d", &dueDate);

    printf("Enter Return Date: ");
    scanf("%d", &returnDate);

    
    daysOverdue = returnDate - dueDate;


    if (daysOverdue <= 7)
    {
        fineRate = 20;
    }
    else if (daysOverdue <= 14)
    {
        fineRate = 50;
    }
    else
    {
        fineRate = 100;
    }

    fineAmount = daysOverdue * fineRate;

    //Display the results
    printf("\nbookID: %d\n", bookID);
    printf("dueDate: %d\n", dueDate);
    printf("returnDate: %d\n", returnDate);
    printf("daysOverdue: %d\n", daysOverdue);
    printf("fineRate: Ksh. %d\n", fineRate);
    printf("fineAmount: Ksh. %d\n", fineAmount);

    return 0;
}