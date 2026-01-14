//HR (id, name, salary, commission) 

#include<stdio.h>
typedef struct HR{
	
	int ID;
	char name[20];
	int salary;
	int commission;
}HR;
struct HR storeHR(HR*);
void displayHR(HR*);
void main()
{
	struct HR h1,h2,h3;
	
	printf("Enter first HR details");
	storeHR(&h1);
	
	printf("Enter second HR details");
	storeHR(&h2);
	
	printf("Enter third HR details");
	storeHR(&h3);
	
	printf("HR details:\n");
	displayHR(&h1);
	displayHR(&h2);
	displayHR(&h3);
}

struct HR storeHR(HR* h1)
{
	
	scanf("%d%s%d%d",&h1->ID,&h1->name,&h1->salary,&h1->commission);
	
}
void displayHR(HR* h1)
{
	printf("ID=%d Name=%s Salary=%d Commission=%d\n",h1->ID,h1->name,h1->salary,h1->commission);
}