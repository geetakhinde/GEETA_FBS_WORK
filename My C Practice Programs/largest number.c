//find largest number a,ong three numbers

#include<stdio.h>
void main()
{
	int n1,n2,n3;
	printf("Enter n1 ,n2 ,n3 ");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("%d is greater",n1);
		}
		else
		{
			printf("%d is greater",n3);
		}
	}
	else
	if(n2>n3)
	{
		printf("%d is greater",n2);
	}
	else
	{
		printf("%d is greater",n3);
	}

	
}