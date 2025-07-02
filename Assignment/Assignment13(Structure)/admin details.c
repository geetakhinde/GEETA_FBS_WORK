//Admin (id, name, salary, allowance)

#include<stdio.h>
struct admin{
	
	int ID;
	char name[20];
	int salary;
	int allowance;
}; 
struct admin storeAdmin();
void displayAdmin(struct admin a1);
void main()
{
	struct admin a1,a2,a3,a4,a5;
	
	printf("Enter first admin detail");
	a1=storeAdmin();
	
	printf("Enter second admin detail");
	a2=storeAdmin();
	
	printf("Enter third admin detail");
	a3=storeAdmin();
	
	printf("Enter fourth admin detail");
	a4=storeAdmin();
	
	printf("Enter fifth admin detail");
	a5=storeAdmin();
	
	printf("Admin details:\n");
	displayAdmin(a1);
	displayAdmin(a2);
	displayAdmin(a3);
	displayAdmin(a4);
	displayAdmin(a5);
	
}

struct admin storeAdmin()
{
	struct admin a1;
	scanf("%d%s%d%d",&a1.ID,&a1.name,&a1.salary,&a1.allowance);
	return a1;
}
void displayAdmin(struct admin a1)
{
	printf("ID=%d Nmae=%s Salary=%d Allowance=%d\n",a1.ID,a1.name,a1.salary,a1.allowance);
}