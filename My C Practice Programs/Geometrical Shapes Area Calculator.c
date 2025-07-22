//Write a C program which computes the area of various geometrical shapes using a menu-driven approach.

#include<stdio.h>
void main()
{
	int choice;
	
	printf("1. Area of circle\n");
	printf("2. Area of rectangle\n");
	printf("3. Area of triangle\n");
	
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			{
				int r;
				float Area;
				printf("Enter radius: ");
				scanf("%d",&r);
				
				Area=3.14*r*r;
				printf("Area of circle=%f",Area);
				break;
			}
		case 2:
			{
				float len,bre,Area;
				printf("Enter length: ");
				scanf("%f",&len);
				printf("Enter breath: ");
				scanf("%f",&bre);
				
				Area=len*bre;
				printf("Area of rectangle=%f",Area);
				break;
			}
		case 3:
			{
				float base,height,Area;
				printf("Enter base: ");
				scanf("%f",&base);
				printf("Enter height: ");
				scanf("%f",&height);
				
				Area=0.5*base*height;
				printf("Area of triangle=%f",Area);
				break;
			}
		default:
			printf("Invalid choice");
	}
}