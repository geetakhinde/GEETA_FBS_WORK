//Write a C program to accept the height of a person in centimeters and categorize the person according to their height.

#include<stdio.h>
void main()
{
	float height;
	
	printf("Enter height in centimeter: ");
	scanf("%f",&height);
	
	if(height>135)
	{
		printf("The person is Tall");
	}
	else
	{
		printf("The person is Drawf");
	}
}