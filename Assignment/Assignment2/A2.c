#include<stdio.h>
void main()
{
	int a=10,b=10,c=10;
	if(a==b && b==c)
	{
		printf("equilateral");
	}
	else
	if(a==b || b==c || c==a)
	{
		printf("isosceles");
	}
	else
	if(a!=b || b!=c || c!=a)
	{
		printf("scalene");
	}
}
