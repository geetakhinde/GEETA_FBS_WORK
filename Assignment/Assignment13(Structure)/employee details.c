//Employee (id, name, salary)

#include<stdio.h>
struct employee{
	
	int id;
	char name[20];
	int salary;
};
struct employee storeEmployee();
void displayEmployee(struct employee e1);
void main()
{
	struct employee e1,e2,e3,e4,e5;
	
	printf("Enter first employee");
	e1=storeEmployee();
	printf("Enter second employee");
	e2=storeEmployee();
	printf("Enter third employee");
	e3=storeEmployee();
	printf("Enter fourth employee");
	e4=storeEmployee();
	printf("Enter fifth employee");
	e5=storeEmployee();
	
	displayEmployee(e1);
	displayEmployee(e2);
	displayEmployee(e3);
	displayEmployee(e4);
	displayEmployee(e5);
	
	
}
struct employee storeEmployee()
{
	struct employee e1;
	scanf("%d",&e1.id);
	scanf("%s",&e1.name);
	scanf("%d",&e1.salary);
	return e1;
}

void displayEmployee(struct employee e1)
{
	printf("ID=%d Name=%s Salary=%d\n",e1.id,e1.name,e1.salary);
	
}