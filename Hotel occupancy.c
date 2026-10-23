//BCS-05-0072/2026

#include <stdio.h>

int main()
{
    int occupancy[5][10];
    int i, j, occupied, vacant;

    // Enter room data i=floors;j=roomsss
    for (i = 0; i < 5; i++)
    {
        printf("\nFloor %d\n", i + 1);

        for (j = 0; j < 10; j++)
        {
            printf("Room %d (1 = occupied, 0 = vacant): ", j + 1);
            scanf("%d", &occupancy[i][j]);

            while (occupancy[i][j] != 0 && occupancy[i][j] != 1)
            {
                printf("Error! Enter only 0 or 1: ");
                scanf("%d", &occupancy[i][j]);
            }
        }
    }

    // Count rooms
    for (i = 0; i < 5; i++)
    {
        occupied = 0;
        vacant = 0;

        for (j = 0; j < 10; j++)
        {
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("\nFloor %d\n", i + 1);
        printf("Occupied rooms: %d\n", occupied);
        printf("Vacant rooms: %d\n", vacant);
    }

    return 0;
}

