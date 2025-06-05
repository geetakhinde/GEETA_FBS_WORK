#include<stdio.h>
int main()
{
	float length, width,perimeter;
	
	printf("enter the length of the rectangle:");
	
	scanf("%f", &length);
	printf("enter the width of the rectangle :");
	scanf("%f", &width);
	
	perimeter = 2 * (length + width);
		
	printf("the perimeter of the rectangle is : %.2f\n", perimeter);
	
}