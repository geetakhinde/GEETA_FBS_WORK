//printf fibonacci series

#include<stdio.h>
void main()
{
	int n,first=0,second=1,next;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	
	printf("The fibonacci series is:");
	for(int i=0;i<=n;i++)
	{
		printf("%d",first);
		next=first+second;
		
	}
	printf("\n");
}