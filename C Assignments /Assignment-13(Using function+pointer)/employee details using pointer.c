//Employee (id, name, salary)

#include<stdio.h>
typedef struct employee{
	
	int id;
	char name[20];
	int salary;
}employee;
struct employee storeEmployee(employee*);
void displayEmployee(employee* );
void main()
{
	struct employee e1,e2,e3,e4,e5;
	
	printf("Enter first employee");
	storeEmployee(&e1);
	printf("Enter second employee");
	storeEmployee(&e2);
	printf("Enter third employee");
	storeEmployee(&e3);
	printf("Enter fourth employee");
	storeEmployee(&e4);
	printf("Enter fifth employee");
	storeEmployee(&e5);
	
	displayEmployee(&e1);
	displayEmployee(&e2);
	displayEmployee(&e3);
	displayEmployee(&e4);
	displayEmployee(&e5);
	
	
}
struct employee storeEmployee(employee* e1)
{
	
	scanf("%d",&e1->id);
	scanf("%s",&e1->name);
	scanf("%d",&e1->salary);
	
}

void displayEmployee(employee* e1)
{
	printf("ID=%d Name=%s Salary=%d\n",e1->id,e1->name,e1->salary);
	
}