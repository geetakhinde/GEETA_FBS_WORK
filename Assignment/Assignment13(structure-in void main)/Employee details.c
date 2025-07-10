//Employee (id, name, salary)

struct employee{
	
	int id;
	int name[20];
	int salary;
};

void main()
{
	struct employee e1,e2,e3,e4,e5;
	
	printf("Enter first employee details");
	scanf("%d%s%d",&e1.id,&e1.name,&e1.salary);
	
	printf("Enter second employee details");
	scanf("%d%s%d",&e2.id,&e2.name,&e2.salary);
	
	printf("Enter third employee details");
	scanf("%d%s%d",&e3.id,&e3.name,&e3.salary);
	
	printf("Enter fourth employee details");
	scanf("%d%s%d",&e4.id,&e4.name,&e4.salary);
	
	printf("Enter fifth employee details");
	scanf("%d%s%d",&e5.id,&e5.name,&e5.salary);
	
	printf("Employee details:\n");
	printf("ID=%d Name=%s Salary=%d\n",e1.id,e1.name,e1.salary);
	printf("ID=%d Name=%s Salary=%d\n",e2.id,e2.name,e2.salary);
	printf("ID=%d Name=%s Salary=%d\n",e3.id,e3.name,e3.salary);
	printf("ID=%d Name=%s Salary=%d\n",e4.id,e4.name,e4.salary);
	printf("ID=%d Name=%s Salary=%d\n",e5.id,e5.name,e5.salary);
}