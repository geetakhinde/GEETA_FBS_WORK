//Employee (id, name, salary)

struct employee{
	
	int ID;
	char name[20];
	int salary;
}; 

void  main()
{
	struct employee earr[5];
	int i;
	for(int i=0;i<5;i++)
	{
		printf("Enter details of %d",i+1);
		scanf("%d%s%d",&earr[i].ID,earr[i].name,&earr[i].salary);
		
	}
	printf("Details of employee:\n");
	for(int i=0;i<5;i++)
	{
		printf("ID=%d Name=%s Salary=%d\n",earr[i].ID,earr[i].name,earr[i].salary);
	}
}