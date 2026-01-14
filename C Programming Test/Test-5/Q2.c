//to initialize some amount in your account.
//Then give choice tto user for deposite or withdraw. 
//and display updated amount. Condition to withdraw(if the balance is less than
//3000 display can't withdraw the amount balance is not sufficient.


#include<stdio.h>
void main()
{
	float balance,amount;
	int choice;
	
	printf("Enter initial balance in your account");
	scanf("%f",&balance);
	
	printf("1.deposite  ");
	printf("2.withdraw\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("Enter your deposite amount");
		scanf("%f",&amount);
		balance=balance+amount;
		printf("Your total amount=%.2f",balance);
		
	}
	else if(choice==2)
	{
		printf("Enter your withdraw amount");
		scanf("%f",&amount);
		
		if(balance>3000)
		{
			balance=balance-amount;
			printf("%.2f",balance);
		}
		else
		{
			printf("Your balance has invalide");
		}
	}
	else
	{
		printf("Invalide choice");
	}
}
	
	
	
	
	
