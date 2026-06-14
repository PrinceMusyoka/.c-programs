//while loop

/*
Description:A program that displays the balance after every withdrawal until the balance becomes zero
Name:PRINCE MUSYOKA
Reg no:BDSA-03-0021/2026
Date:14/06/2026
*/

#include <stdio.h>

int main(){
	float bank_balance=12000.0;
	float amount;
	
	while(bank_balance >0){
	printf("Enter amount; ");
	scanf("%f", &amount);//
	
	bank_balance=bank_balance-amount;//to allow reduction when money is withdrawn
	
	printf("Your account balance is: %.2f\n",bank_balance);
	}
	printf("you have less money in your account to withdraw \n");
	return 0;
}