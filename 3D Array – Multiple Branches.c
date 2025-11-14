#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    srand(time(0));   // seed for random generator

    // 1. Fill the 3D array with random occupancy
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
            }
        }
    }

    // 2. Count total rooms occupied across all branches
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    // 3. show result
    printf("Total rooms occupied across all branches: %d\n", totalOccupied);

    return 0;
}