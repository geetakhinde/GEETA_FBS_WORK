//check prime or not

#include<stdio.h>
void main()
{
	int num,Isprime=1;
	
	printf("Enter the number:");
	scanf("%d",&num);
	
	if(num<=1)
	{
		Isprime=0;
	}
	else
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			Isprime=0;
			break;
		}
	}
	if(Isprime==1)
	{
		printf("Prime number");
	}
	else
	{
		printf("Not prime");
	}
}