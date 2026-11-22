//BCS-05-0072/2026

#include <stdio.h>

int main() {
    int patientID, age, daysAdmitted;
    float temp, totalCost;
    char patientName[50];

    // Input patient details
    printf("Enter Patient ID: ");
    scanf("%d \n", &patientID);

    printf("Enter Patient Name: \n");
    scanf("%s", patientName);

    printf("Enter Patient Age: ");
    scanf("%d", &age);

    printf("Enter Patient Temperature: ");
    scanf("%f", &temp);

    printf("Enter Number of Days Admitted: ");
    scanf("%d", &daysAdmitted);

    // Calculate hospital accommodation cost
    totalCost = daysAdmitted * 2500;

    // Display patient details and cost
    printf("\nPATIENT DETAILS\n");

    printf("Patient ID: %d\n", patientID);
    printf("Patient Name: %s\n", patientName);
    printf("Age: %d years\n", age);
    printf("Temperature: %.2f degree celcius\n", temp);
    printf("Days Admitted: %d days\n", daysAdmitted);
    printf("Total Accommodation Cost: KSh %.2f\n", totalCost);

    return 0;
}

