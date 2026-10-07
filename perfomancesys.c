//BCS-05-0072/2026

#include <stdio.h>

int calculateTotal(int sub1, int sub2, int sub3) {
    return sub1 + sub2 + sub3;
}

float calculateAverage(int total) {
    return total/3;
}

void displayResult(float average) {
    if (average >= 50)
        printf("Result: Passed\n");
    else
        printf("Result: Failed\n");
}

int main() {
    int sub1, sub2, sub3,total;
    float average;

    printf("Enter Subject 1 marks: ");
    scanf("%d", &sub1);

    printf("Enter Subject 2 marks: ");
    scanf("%d", &sub2);

    printf("Enter Subject 3 marks: ");
    scanf("%d", &sub3);

    total = calculateTotal(sub1, sub2, sub3);
    average = calculateAverage(total);

    printf("\nTotal marks: %d\n", total);
    printf("Average marks: %f\n", average);

    displayResult(average);

    return 0;
}