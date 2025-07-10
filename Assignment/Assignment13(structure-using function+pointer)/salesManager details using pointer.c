//SalesManager (id, name, salary, incentive, target) 

#include<stdio.h>
typedef struct salesManager{
	
	int ID;
	char name[20];
	int salary;
	int incentive;
	int target;
}salesManager;
storesalesManager(salesManager*);
void displayManager(salesManager*);
void main()
{
	struct salesManager s1,s2,s3,s4;
	
	printf("Enter first salesManager detail");
	storesalesManager(&s1);
	
	printf("Enter second salesManager detail");
	storesalesManager(&s2);
	
	printf("Enter second salesManager detail");
	storesalesManager(&s3);
	
	printf("Enter second salesManager detail");
	storesalesManager(&s4);
	
	printf("SalesManager details:\n");
	displayManager(&s1);
	displayManager(&s2);
	displayManager(&s3);
	displayManager(&s4);
}
 storesalesManager(salesManager* s2)
{
	
	scanf("%d%S%d%d",&s2->ID,&s2->name,&s2->salary,&s2->incentive,&s2->target);
	
}
void displayManager(salesManager* s1)
{
	printf("ID=%d name=%s salary=%d incentive=%d target=%d\n",s1->ID,s1->name,s1->salary,s1->incentive,s1->target);
}