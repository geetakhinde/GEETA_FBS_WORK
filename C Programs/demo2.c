//Employee (id, name, salary)

struct employee{
	
	int ID;
	char name[20];
	int salary;
}; 
displayarray(struct employee, struct i);

void  main()
{
	struct employee earr[5];
	int i;
	for(int i=0;i<5;i++)
	{
		printf("Enter details of %d",i+1);
		int display=displayarray(struct employee, struct i);
		
		
	}
	printf("Details of %d\n",i+1);
	printf("%d%s%d\n",earr[i].ID,earr[i].name,earr[i].salary);
	
}
displayarray(struct employee, struct i);
{
	scanf("%d%s%d",&earr[i].ID,earr[i].name,&earr[i].salary);
	
}