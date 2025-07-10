//Distance ( feet, inch)

struct distance{
	
	int feet;
	int inch;
};
void main()
{
	
	struct distance d1,d2,d3;
	
	printf("Enter first distance");
	scanf("%d %d",&d1.feet,&d1.inch);
	
	printf("Enter second distance");
	scanf("%d %d",&d2.feet,&d2.inch);
	
	printf("Enter third distance");
	scanf("%d %d",&d3.feet,&d3.inch);
	
	printf("Distance details:\n");
	printf("Feet=%d Inch=%d\n",d1.feet,d1.inch);
	printf("Feet=%d Inch=%d\n",d2.feet,d2.inch);
	printf("Feet=%d Inch=%d",d3.feet,d3.inch);
}