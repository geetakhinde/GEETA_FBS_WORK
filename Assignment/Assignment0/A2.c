//to find the area of a circle

#include<stdio.h>
#define PI 3.14
int main()
{
	float radius, area;
	printf("enter the radius of the circle:");
	scanf("%f",&radius);
	area = PI* radius * radius;
	printf("the area of the circle with radius %.2f is %.2f\n", radius, area);
	return 0;
	
	
}
