//Write a C program to read any day number in integer and display the day name in word format.

#include<stdio.h>
void main()
{
	int num;
	
	printf("Enter number: ");
	scanf("%d",&num);
	
	if(num==1)
	{
		printf("Monday");
	}
	else if(num==2)
	{
		printf("Tuesday");
	}
	else if(num==3)
	{
		printf("Wednesday");
	}
	else if(num==4)
	{
		printf("Thursday");
	}
	else if(num==5)
	{
		printf("Friday");
	}
	else if(num==6)
	{
		printf("Saturday");
	}
	else if(num==7)
	{
		printf("Sunday");
	}
	else
	{
		printf("Invalide number");
	}
}