/*
Author:Sandra
Reg number:BCS-05-0072/2026
*/

#include <stdio.h>

int main()
{
    float attendance, averageMarks;

    //prompt the user
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &averageMarks);

    if (attendance >= 75 && averageMarks >= 40)
    {
        printf("Eligible for final exams.\n");
    }
    else
    {
        printf("Not eligible.\n");
    }

    return 0;
}