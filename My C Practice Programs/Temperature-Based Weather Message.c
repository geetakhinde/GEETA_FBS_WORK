//Write a C program to read temperature in centigrade and display a suitable message according to the temperature

#include<stdio.h>
void main()
{
	float temp;
	
	printf("Enter the temperature: ");
	scanf("%f",&temp);
	
	if(temp<0)
	{
		printf("Freezing point");
	}
	else if(temp>0 && temp<10)
	{
		printf(" very cold weather");
	}
	else if(temp>=10 && temp<20)
	{
		printf(" cold weather");
	}
	else if(temp>=20 && temp<30)
	{
		printf(" normal temperature");
	}
	else if(temp>=30 && temp<40)
	{
		printf(" hot temperature");
	}
	else if(temp>=40)
	{
		printf(" very hot temperature");
	}
}