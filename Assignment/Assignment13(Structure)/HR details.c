//HR (id, name, salary, commission) 

#include<stdio.h>
struct HR{
	
	int ID;
	char name[20];
	int salary;
	int commission;
};
struct HR storeHR();
void displayHR(struct HR);
void main()
{
	struct HR h1,h2,h3;
	
	printf("Enter first HR details");
	h1=storeHR();
	
	printf("Enter second HR details");
	h2=storeHR();
	
	printf("Enter third HR details");
	h3=storeHR();
	
	printf("HR details:\n");
	displayHR(h1);
	displayHR(h2);
	displayHR(h3);
}

struct HR storeHR()
{
	struct HR h1;
	scanf("%d%s%d%d",&h1.ID,&h1.name,&h1.salary,&h1.commission);
	return h1;
}
void displayHR(struct HR h1)
{
	printf("ID=%d Name=%s Salary=%d Commission=%d\n",h1.ID,h1.name,h1.salary,h1.commission);
}