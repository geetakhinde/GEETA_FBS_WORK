//sumof natural numbers

#include<stdio.h>
void main()
{
	int num,sum=0;
	printf("Enter the number");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++)
	{
		sum=sum+i;
	}
	printf("sum=%d",sum);
}