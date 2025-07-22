//program to accept two integers and check whether they are equal or not.

#include<stdio.h>
void main()
{
	int a,b;
	
	printf("Enter the value of a: ");
	scanf("%d",&a);
	
	printf("Enter the value of b: ");
	scanf("%d",&b);
	
	if(a==b)
	{
		printf("a and b are equals");
	}
	else
	{
		printf("a and b are not equals");
	}
}