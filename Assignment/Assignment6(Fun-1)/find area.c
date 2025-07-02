#include<stdio.h>
int findarea();     //defination
int main()
{
	findarea();       //call
}
	int findarea()       //declaration
{
	float base=4;
	float height=5;
	float area;
	
	area=0.5*base*height;
	printf("%f",area);
}