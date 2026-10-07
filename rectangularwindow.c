//BCS-05-0072/2026
#include <stdio.h>
#include <math.h>

double calculateDiagonal(double length, double width)
{
    return sqrt(pow(length, 2) + pow(width, 2));
}

int main()
{
    double length, width, diagonal;

    printf("Enter length: ");
    scanf("%lf", &length);

    printf("Enter width: ");
    scanf("%lf", &width);

    diagonal = calculateDiagonal(length, width);

    printf("Diagonal of the window: %lf\n", diagonal);

    return 0;
}