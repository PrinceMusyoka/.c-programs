//Program that prompts the user to input data

/*
Description: Program that prompts the user to enter height, bank balance and phone number
Name: PRINCE MUSYOKA
Date: 20/05/2026
REG NO: BDSA-03-0021/2026
Version 1
*/

#include <stdio.h>

int main(){
	
	float height;
	double bank_balance;
	int phone_number;
	
	printf("Enter your height:\n");
	scanf("%f", & height);
	
	printf("Enter your bank balance:\n");
	scanf("%lf", & bank_balance);
	
	printf("Enter your phone number:\n");
	scanf("%d", & phone_number);
	
	printf("your height is  %.2f\n", height);
	printf("Your bank balance is %.2lf \n", bank_balance);
	printf("Your phone number is %.2d\n", phone_number);
	
	return 0;
}
