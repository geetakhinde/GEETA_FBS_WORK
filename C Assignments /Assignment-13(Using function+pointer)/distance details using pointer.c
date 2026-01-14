//Distance ( feet, inch)

#include<stdio.h>
typedef struct distance{
	
	int feet;
	int inch;
}distance;
struct distance storeDistance(distance*);
void displayDistance(distance*);
void main()
{
	struct distance d1,d2,d3,d4,d5;
	
	printf("Enter distance 1");
	storeDistance(&d1);
	printf("Enter distance 2");
	storeDistance(&d2);
	printf("Enter distance 3");
	storeDistance(&d3);
	printf("Enter distance 4");
	storeDistance(&d4);
	printf("Enter distance 5");
	storeDistance(&d5);
	
	printf("Distance details:\n");
	displayDistance(&d1);
	displayDistance(&d2);
	displayDistance(&d3);
	displayDistance(&d4);
	displayDistance(&d5);	
}
struct distance storeDistance(distance* d1)
{
	
	scanf("%d%d",&d1->feet,&d1->inch);
	
}
void displayDistance(distance* d1)
{
	printf("Feet=%d Inch=%d\n",d1->feet,d1->inch);
}