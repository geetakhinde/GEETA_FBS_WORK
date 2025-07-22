//Write a C program to check whether a triangle can be formed with the given values for the angles.

#include<stdio.h>
void main()
{
	float a,b,c,sum;
	
	printf("Enter angle a:");
	scanf("%f",&a);
	
	printf("Enter angle b:");
	scanf("%f",&b);
	
	printf("Enter angle c:");
	scanf("%f",&c);
	
	sum=a+b+c;
	
	if(sum==180)
	{
		printf("The triangle is valide");
	}
	else
	{
		printf("The triangle is not valide");
	}
}