//Array-1D
/*
description:calculates and displays a weekly revenue tracker
Name:Prince Musyoka Mumo
Reg No:BDSA-03-0021/2026
Date:29/6/2026
*/
#include<stdio.h>

int main(){
	float revenue[7];
	float total=0,average;
	int i;
	
	printf("Weekly revenue  tracker \n\n");
	
	//Input revenue for each day
	for(i=0;i<7;i++)
	{
		printf("Enter revenue for day %d:",i +1);
		scanf("%f",&revenue[i]);
		
		total=total+revenue[i];		
	}
	
	//Calculate average
	average=total / 7;
	
	//Display results
	printf("\n Weekly Summary \n");
	printf("\nTotal Weekly Revenue=%.2f\n", total);
	printf("Average Daily Revenue=%.2f\n", average);
	
	return 0;
}