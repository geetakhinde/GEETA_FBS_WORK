//Date (date, month, year) 

struct date{
	
	int date;
	int month;
	int year;
};
void main()
{
	struct date d1,d2,d3;
	
	printf("Enter first date");
	scanf("%d %d %d",&d1.date,&d1.month,&d1.year);
	
	printf("Enter second date");
	scanf("%d %d %d",&d2.date,&d2.month,&d2.year);
	
	printf("Enter third date");
	scanf("%d %d %d",&d3.date,&d3.month,&d3.year);
	
	printf("Date details:\n");
	
	printf("Date=%d Month=%d Year=%d\n",d1.date,d1.month,d1.year);
	printf("Date=%d Month=%d Year=%d\n",d2.date,d2.month,d2.year);
	printf("Date=%d Month=%d Year=%d\n",d3.date,d3.month,d3.year);
	
	
}