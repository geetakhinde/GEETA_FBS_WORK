#include<stdio.h>
void main()
{
	int number,start,end;
	printf("Enter starting and ending value");
	scanf("%d%d",&start,&end);
	
	printf("Odd numbers in given range\t");
	for(int i=start;i<end;i++)
	{
		
		if(i%2!=0)
		{
			printf("%d\t",i);
		}
		
	}
}