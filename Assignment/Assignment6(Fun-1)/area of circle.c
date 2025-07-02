
//area of a circle
#include<stdio.h>
void areaofcircle();     //declaration
void main()
{
	areaofcircle();       //call
}
	void areaofcircle()    //defination
{
	float pie=3.14;
	int area,radius;
	
	printf("Enter radius");
	scanf("%d",&radius);
	
	area=pie*radius*radius;
	printf("Area of a circle=%d",area);
}
	

	
	
