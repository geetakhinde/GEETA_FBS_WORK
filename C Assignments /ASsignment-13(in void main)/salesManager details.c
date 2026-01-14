//SalesManager (id, name, salary, incentive, target) 

struct salesManager{
	
	int id;
	char name[20];
	int salary;
	int incentive;
	int target;
};
void main()
{
	
	struct salesManager s1,s2,s3,s4,s5;
	
	printf("Enter first salesManager details:");
	scanf("%d %s %d %d %d",&s1.id,s1.name,&s1.salary,&s1.incentive,&s1.target);
	
	printf("Enter second salesManager details:");
	scanf("%d %s %d %d %d",&s2.id,s2.name,&s2.salary,&s2.incentive,&s2.target);
	
	printf("Enter third salesManager details:");
	scanf("%d %s %d %d %d",&s3.id,s3.name,&s3.salary,&s3.incentive,&s3.target);
	
	printf("Enter fourth salesManager details:");
	scanf("%d %s %d %d %d",&s4.id,s4.name,&s4.salary,&s4.incentive,&s4.target);
	
	printf("Enter fifth salesManager details:");
	scanf("%d %s %d %d %d",&s5.id,s5.name,&s5.salary,&s5.incentive,&s5.target);
	
	printf("SalesManager details:\n");
	printf("ID=%d Name=%s Salary=%d Incentive=%d Target=%d\n",s1.id,s1.name,s1.salary,s1.incentive,s1.target);
	printf("ID=%d Name=%s Salary=%d Incentive=%d Target=%d\n",s2.id,s2.name,s2.salary,s2.incentive,s2.target);
	printf("ID=%d Name=%s Salary=%d Incentive=%d Target=%d\n",s3.id,s3.name,s3.salary,s3.incentive,s3.target);
	printf("ID=%d Name=%s Salary=%d Incentive=%d Target=%d\n",s4.id,s4.name,s4.salary,s4.incentive,s4.target);
	printf("ID=%d Name=%s Salary=%d Incentive=%d Target=%d\n",s5.id,s5.name,s5.salary,s5.incentive,s5.target);
	
}