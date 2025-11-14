/*
name:EVANS KOMAREN SEKUT
reg no:CT101/G/22798/24
description:2DArray
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int floor, room;
    
    srand(time(0));  // seed for random numbers
    
    // 1. create random occupancy data (0 or 1)
    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 0 or 1
        }
    }
    
    // 2. show number of occupied and vacant rooms per floor
    printf("ROOM OCCUPANCY REPORT\n");
    printf("======================\n\n");
    
    for (floor = 0; floor < 5; floor++) {
        int occupied = 0, vacant = 0;
        
        // count rooms
        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        
        // output results for each floor
        printf("Floor %d:  Occupied = %d   Vacant = %d\n",
               floor + 1, occupied, vacant);
    }
    
    return 0;

}

