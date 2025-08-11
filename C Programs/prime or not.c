//check prime or not

#include<stdio.h>
void main()
{
	int num,prime=1;
	printf("Enter the number");
	scanf("%d",&num);
	
	while(num==0||num==1)
	{
		prime=0;
	}
	for(int i=2;i<=num/2;i++)
	{
		if(num%i==0)
		prime=0;
		break;
	}
	if(prime==1)
	{
		printf("No is prime");
	}
	else
	{
		printf("No is not prime");
	}
}