#include<stdio.h>
int IsArmstrong();   //defination
int main()
{
	IsArmstrong();   //call
}
	int IsArmstrong()     //declaration
{ 
	int num,cube,rem,sum=0;
	printf("Enter the number");
	scanf("%d",&num);
	int temp=num;
	
	while(num>0)
	{
		rem=num%10;
		cube=rem*rem*rem;
		sum=sum+cube;
		num=num/10;	
	}
	if(sum==temp)
	{
		printf("Armstrong");
	}
	else
	{
		printf("Not Armstrong");
	}
}
	
	