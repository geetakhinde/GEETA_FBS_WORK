//Date (date, month, year) using array

struct date{
	
	int date;
	int month;
	int year;
};
void main()
{
	struct date Darr[3];
	for(int i=0;i<3;i++)
	{
		printf("Enter %d Date details",i+1);
		scanf("%d%d%d",&Darr[i].date,&Darr[i].month,&Darr[i].year);
	}
	
	printf("Date details:\n");
	for(int i=0;i<3;i++)
	{
		printf("Date=%d Month=%d Year=%d\n",Darr[i].date,Darr[i].month,Darr[i].year);
	}
}