#include<stdio.h>
void main()
{
	int num,start,end;
	printf("Enter starting and ending value");
	scanf("%d%d",&start,&end);
	
	printf("Even numbers in given range\t");
	for(int i=start;i<=end;i++)
	{
		if(i%2==0)
		{
			printf( "%d\t",i);
		}
	}

}