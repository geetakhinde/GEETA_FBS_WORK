//Date (date, month, year) 

#include<stdio.h>
typedef struct date{
	
	int date;
	char month[20];
	int year;
}date;
struct date storeDate(date*);
void displayDate(date*);
void main()
{
	struct date d1,d2,d3;
	printf("Enter first date");
	storeDate(&d1);
	
	printf("Enter second date");
	storeDate(&d2);
	
	printf("Enter third date");
	storeDate(&d3);
	
	printf("Date details:\n");
	displayDate(&d1);
	displayDate(&d2);
	displayDate(&d3);
}

struct date storeDate(date* d1)
{
	
	scanf("%d%s%d",&d1->date,&d1->month,&d1->year);
	
}
void displayDate(date* d1)
{
	printf("Date=%d Month=%s Year=%d\n",d1->date,d1->month,d1->year);
}