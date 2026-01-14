#include<stdio.h>
void main()
{
	int row=5,col=5;
	for(int i=row;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
				printf("* ");	
		}
		printf("\n");
	}
}