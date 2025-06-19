#include<stdio.h>
void main()
{
	int num,start,end,sum;
	printf("Enter starting  value");
	scanf("%d",&start);
	
	printf("Enter ending value");
	scanf("%d",&end);
	
	for(int i=start;i<=end;i++)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
	
	
}