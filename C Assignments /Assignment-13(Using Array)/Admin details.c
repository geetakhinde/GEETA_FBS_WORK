//Admin (id, name, salary, allowance) using array

struct admin{
	
	int id;
	char name[10];
	int salary;
	int allowance;
};
void main()
{
	struct admin arr[5];
	for(int i=0;i<5;i++)
	{
		printf("Enter %d admin details",i+1);
		scanf("%d %s %d %d",&arr[i].id,arr[i].name,&arr[i].salary,&arr[i].allowance);
	}
	
	printf("Details of Admin\n");
	for(int i=0;i<5;i++)
	{
		printf("ID=%d Name=%s Salary=%d Allowance=%d\n",arr[i].id,arr[i].name,arr[i].salary,arr[i].allowance);
	}
}