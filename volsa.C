/*
Author:Sandra
Reg Number:BCS-05-0072/2026
*/

#include <stdio.h>

int main()
{
    float radius, height, volume, surfaceArea;
    float PI=3.142;

    //Prompt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    //Calculate volume and surface area
    volume = PI * radius * radius * height;

    surfaceArea = 2 * PI * radius * height + 2 * PI * radius * radius;

    //Display results
    printf("\nVolume of the cylinder       = %f cubic units\n", volume);
    printf("Surface area of the cylinder = %f square units\n", surfaceArea);

    return 0;
}