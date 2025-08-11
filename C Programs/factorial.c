//to find factorial of a number

#include<stdio.h>
void main()
{
	int no,fact=1;
	printf("Enter number");
	scanf("%d",&no);
	
	for(int i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	printf("Factoaial=%d",fact);
}