#include<stdio.h>
void main()
{
	int n,i=2,sum=1;
	printf("Enter the no");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		sum=sum+i;
		i++;
	}
	if(sum==n)
	printf("Perfect");
	else
	printf("Not Perfect");
}