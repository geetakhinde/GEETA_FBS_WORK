//calculate the sum of natural numbers

#include<stdio.h>
void main()
{
	int n,i,sum=0;
	
	printf("Enter the positive number");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum=%d",sum);
}