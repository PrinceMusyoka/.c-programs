//while loop

/*
Description:A program that promts the user repeatedly until the right password is entered
Name:PRINCE MUSYOKA
Reg no:BDSA-03-0021/2026
Date:14/06/2026
*/

#include <stdio.h>

int main(){
	int password;
	do{
		printf("Enter password: ");
		scanf("%d",&password);
		if(password !=1234){
			printf("wrong paswsword.Try again \n");
		}
	}
	while(password !=1234);
	
	printf("Access granted \n");
return 0;
}