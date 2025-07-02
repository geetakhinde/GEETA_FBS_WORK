//Distance ( feet, inch)

#include<stdio.h>
struct distance{
	
	int feet;
	int inch;
};
struct distance storeDistance();
void main()
{
	struct distance d1,d2,d3,d4,d5;
	
	printf("Enter distance 1");
	d1=storeDistance();
	printf("Enter distance 2");
	d2=storeDistance();
	printf("Enter distance 3");
	d3=storeDistance();
	printf("Enter distance 4");
	d4=storeDistance();
	printf("Enter distance 5");
	d5=storeDistance();
	
	printf("Distance details:\n");
	displayDistance(d1);
	displayDistance(d2);
	displayDistance(d3);
	displayDistance(d4);
	displayDistance(d5);	
}
struct distance storeDistance()
{
	struct distance d1;
	scanf("%d%d",&d1.feet,&d1.inch);
	return d1;
}
displayDistance(struct distance d1)
{
	printf("Feet=%d Inch=%d\n",d1.feet,d1.inch);
}