//SalesManager (id, name, salary, incentive, target) using array

struct Salesmanager{
	
	int id;
	char name[10];
	int salary;
	int incentive;
	int target;
};

void main()
{
	struct Salesmanager Sarr[3];
	for(int i=0;i<3;i++)
	{
		printf("Enter %d Salesmanager details",i+1);
		scanf("%d%s%d%d%d",&Sarr[i].id,Sarr[i].name,&Sarr[i].salary,&Sarr[i].incentive,&Sarr[i].target);
	}
	
	printf("Salesmanager details:\n");
	for(int i=0;i<3;i++)
	{
		printf("ID=%d Name=%s Salary=%d Incentive=%d Target=%d\n",Sarr[i].id,Sarr[i].name,Sarr[i].salary,Sarr[i].incentive,Sarr[i].target);
	}
}