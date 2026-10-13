//Reg Number:BCS-05-0072/2026

#include <stdio.h>

int calculate_fare(int distance);

int main() {
    int distance,fare;
    
    printf("Enter the distance covered(in kilometres):");
    scanf("%d", &distance);

	fare = distance*50;
    printf("Total fare is KSh. %d\n", fare);
}

int calculateFare(int distance){
	return distance*50;
}