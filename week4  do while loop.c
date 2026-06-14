//do while loop

/*
Description:write a program that keeps prompting the user for the password until the correct one is entered
Name:Prince musyoka 
Reg no:BDSA-03-0021/2026
Date:14/6/2026
*/

#include <stdio.h>

int main(){
	int password;
	do{
		printf("Enter password: ");
		scanf("%d", &password);
		
		if(password !=1234){
			printf("wrong password. Try again\n");
		}
	}
	while(password !=1234);
	
	printf("access granted\n");
return 0;
}