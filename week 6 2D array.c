//Array-2D
/*
description:Display room occupancy in one branch
Name:Prince Musyoka Mumo
Reg No:BDSA-03-0021/2026
Date:29/6/2026
*/

#include<stdio.h>
 int main()
 {
 int occupancy[5][10];
 int i,j;
 int occupied, vacant;
 
 printf("Hotel Room Occupancy Tracker \n\n");
 
 //Input occupancy data
 for(i=0;i<5;i++)
 {
 	printf("\nFloor %d\n",i+1);
 	for(j=0;j<10;j++)
	 {
	 	printf("Enter room %d status(1 = Occupied, 0=Vacant):",j + 1);
	 	scanf("%d", &occupancy[i][j]);
	 }
 }
 //Display occupancy report per floor
 printf("\nRoom Occupancy Report\n");
 
 for(i=0;i<5;i++)
 {
 	//Reset counters of current floor before checking its rooms 
 	occupied=0;
 	vacant=0;
 	
 	for(j=0;j<10;j++)
	 {
	 	if(occupancy[i][j]==1)
		 {
		 	
	 		occupied++;
		 }
	 	else
		 {
	 		vacant++;
 }
 printf("Floor %d:%d occupied,%d vacant\n",i+1,occupied,vacant);
 }
  return 0;
 }}