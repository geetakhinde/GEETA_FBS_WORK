//Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>
void main()
{
	int a1,a2;
	
	printf("Enter first amount: ");
	scanf("%d",&a1);
	
	printf("Enter second amount: ");
	scanf("%d",&a2);
	
	if(a2>a1)
	{
		printf("You can booked your profit amount : %d",a2-a1);
	}
	else if(a2<a1)
	{
		printf("You can booked your loss amount : %d",a2-a1);
	}
	
}