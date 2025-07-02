//SalesManager (id, name, salary, incentive, target) 

#include<stdio.h>
struct salesManager{
	
	int ID;
	char name[20];
	int salary;
	int incentive;
	int target;
};
struct storesalesManager();
void main()
{
	struct salesManager s1,s2,s3,s4;
	
	printf("Enter first salesManager detail");
	s1=storesalesManager();
	
	printf("Enter second salesManager detail");
	s1=storesalesManager();
	
	printf("Enter second salesManager detail");
	s1=storesalesManager();
	
	printf("Enter second salesManager detail");
	s1=storesalesManager();
	
	printf("SalesManager details:\n");
	printf("ID=%d name=%s salary=%d incentive=%d target=%d\n",s1.ID,s1.name,s1.salary,s1.incentive,s1.target);
	printf("ID=%d name=%s salary=%d incentive=%d target=%d\n",s2.ID,s2.name,s2.salary,s2.incentive,s2.target);
	printf("ID=%d name=%s salary=%d incentive=%d target=%d\n",s3.ID,s3.name,s3.salary,s3.incentive,s3.target);
	printf("ID=%d name=%s salary=%d incentive=%d target=%d\n",s4.ID,s4.name,s4.salary,s4.incentive,s4.target);

}
 struct storesalesManager()
{
	struct salesManager s2;
	scanf("%d%S%d%d",&s2.ID,&s2.name,&s2.salary,&s2.incentive,&s2.target);
	return s2;
}