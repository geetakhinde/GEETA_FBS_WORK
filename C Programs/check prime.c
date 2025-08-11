//check prime or not

#include<stdio.h>
void main()
{
	int num,i,prime=1;
	printf("Enter the number:");
	scanf("%d",&num);
	
	if(num==1||num==0)
	{
		prime=0;   // 0 and 1 are not prime
	}
	for(int i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			prime=0;    //not prime
			break;
		}
	}
	if(prime==1)
	{
		printf("Number is prime");
	}
	else
	{
		printf("Number is not prime");
	}
	
	
}