//Date (date, month, year) 

#include<stdio.h>
struct date{
	
	int date;
	char month[20];
	int year;
};
struct date storeDate();
void main()
{
	struct date d1,d2,d3;
	printf("Enter first date");
	d1=storeDate();
	
	printf("Enter second date");
	d2=storeDate();
	
	printf("Enter third date");
	d3=storeDate();
	
	printf("Date details:\n");
	displayDate(d1);
	displayDate(d2);
	displayDate(d3);
}

struct date storeDate()
{
	struct date d1;
	scanf("%d%s%d",&d1.date,&d1.month,&d1.year);
	return d1;
}
void displayDate(struct date d1)
{
	printf("Date=%d Month=%s Year=%d\n",d1.date,d1.month,d1.year);
}