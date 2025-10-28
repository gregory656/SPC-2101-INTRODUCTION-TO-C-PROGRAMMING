#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // ------------------------------
    // 1D ARRAY: Weekly Revenue Tracker
    // ------------------------------
    float revenue[7];
    float totalRevenue = 0, averageRevenue;

    printf("=== Weekly Revenue Tracker ===\n");
    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7;

    printf("\nTotal Weekly Revenue: %.2f\n", totalRevenue);
    printf("Average Daily Revenue: %.2f\n\n", averageRevenue);

    // ------------------------------
    // 2D ARRAY: Room Occupancy (One Branch)
    // ------------------------------
    int occupancy[5][10]; // 5 floors, 10 rooms per floor
    int occupied, vacant;

    srand(time(0)); // For random occupancy data

    printf("=== Room Occupancy (One Branch) ===\n");
    for (int i = 0; i < 5; i++) {
        occupied = vacant = 0;
        for (int j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2; // Random 0 or 1
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d -> Occupied: %d, Vacant: %d\n", i + 1, occupied, vacant);
    }

    // ------------------------------
    // 3D ARRAY: Multiple Branches
    // ------------------------------
    int chain[3][5][10]; // 3 branches, 5 floors, 10 rooms per floor
    int totalOccupied = 0;

    printf("\n=== Multiple Branches Occupancy ===\n");
    for (int b = 0; b < 3; b++) {
        int branchOccupied = 0;
        for (int f = 0; f < 5; f++) {
            for (int r = 0; r < 10; r++) {
                chain[b][f][r] = rand() % 2; // Random occupancy
                if (chain[b][f][r] == 1)
                    branchOccupied++;
            }
        }
        totalOccupied += branchOccupied;
        printf("Branch %d -> Occupied Rooms: %d\n", b + 1, branchOccupied);
    }

    printf("\nTotal Occupied Rooms Across All Branches: %d\n", totalOccupied);

    return 0;
}