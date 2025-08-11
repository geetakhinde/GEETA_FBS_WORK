//Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
// Ex:7 9 Output : The coordinate point (7,9) lies in the First quadrant.

#include<stdio.h>
void main()
{
	int x,y;
	
	printf("Enter X coordinate point: ");
	scanf("%d",&x);
	
	printf("Enter Y coordinate point: ");
	scanf("%d",&y);
	
	if(x>0 && y>0)
	{
		printf("The coordinate point (%d,%d) lies in the First quadrant",x,y);
	}
	else if(x<0 && y>0)
	{
		printf("The coordinate point (%d,%d) lies in the Second quadrant",x,y);
	}
	else if(x<0 && y<0)
	{
		printf("The coordinate point (%d,%d) lies in the Third quadrant",x,y);
	}
	else if(x>0 && y<0)
	{
		printf("The coordinate point (%d,%d) lies in the Fourth quadrant",x,y);
	}
	else if(x==0 && y==0)
	{
		printf("The coordinate point (%d,%d) is the Origin points",x,y);
	}
	
}