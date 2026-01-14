#include<stdio.h>
void main()
{
	int n=5;
	int fact,sum;
	fact=1;
	while(n>0)
	{
		fact=fact*n;
		n--;
	}
	printf("%d",fact);
	
}