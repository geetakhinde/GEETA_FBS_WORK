//check armstrong or not

#include<stdio.h>
void main()
{
	int num,rem,cube,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	int temp=num;
	
	while(num>0)
	{
		rem=num%10;
		cube=rem*rem*rem;
		sum=sum+cube;
		num=num/10;
	}
	if(temp==sum)
	{
		printf("No is armstrong");
	}
	else
	{
		printf("No is not armstrong");
	}
	
}