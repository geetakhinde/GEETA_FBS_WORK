//Distance ( feet, inch) using array

struct distance{
	
	int feet;
	int inch;
};
void main()
{
	
	struct distance Darr[3];
	
	
	for(int i=0;i<3;i++)
	{
		printf("Enter %d distance",i+1);
		scanf("%d%d",&Darr[i].feet,&Darr[i].inch);
	}
	
	printf("Date Details:\n");
	for(int i=0;i<3;i++)
	{
		printf("Feet=%d Inch=%d\n",Darr[i].feet,Darr[i].inch);
	}
}