//Reg Number:BCS-05-0072/2026

#include <stdio.h>

int main()
{
    int mark;
    char grade;
    char choice;

    do {
        do {
            printf("Enter the student's mark (0-100): ");
            scanf("%d", &mark);

            if (mark < 0 || mark > 100)
                printf("Error,Invalid mark.\n");
            
        } while (mark < 0 || mark > 100);

        if (mark >= 80)
            grade = 'A';
        else if (mark >= 70)
            grade = 'B';
        else if (mark >= 60)
            grade = 'C';
        else if (mark >= 50)
            grade = 'D';
        else
            grade = 'F';

        printf("Mark: %d\n", mark);
        printf("Grade: %c\n", grade);

        printf("Do you want to enter another student's mark? (Y/N): ");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

    printf("Program ended.\n");

    return 0;
}