//Array-3D
/*
description:Display room occupancy for multiple branches
Name:Prince Musyoka Mumo
Reg No:BDSA-03-0021/2026
Date:29/6/2026
*/

#include <stdio.h>

int main() 
{
    // 1. Declare 3D array and variables
    int chain[3][5][10];
    int b, f, r; 
    int total_occupied = 0;

    srand(time(NULL));

    printf("Hotel Chain Occupancy System\n\n");

    // 2. Allocate random occupancy (1 or 0) to each room in every hotel
    for (b = 0; b < 3; b++) 
    {
        for (f = 0; f < 5; f++) 
        {
            for (r = 0; r < 10; r++) 
            {
                chain[b][f][r] = rand() % 2; 
            }
        }
    }

    // 3. Calculate the total number of occupied rooms across every hotel
    for (b = 0; b < 3; b++) 
    {
        for (f = 0; f < 5; f++) 
        {
            for (r = 0; r < 10; r++) 
            {
                if (chain[b][f][r] == 1) 
                {
                    total_occupied++;
                }
            }
        }
    }

    // Display the final calculation
    printf("Total number of occupied rooms across every hotel: %d\n", total_occupied);
    printf("Maximum capacity across entire chain: 150 rooms\n");

    return 0;
}