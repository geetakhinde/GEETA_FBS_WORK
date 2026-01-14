//HR (id, name, salary, commission) using array

struct HR{
	
	int id;
	char name[10];
	int salary;
	int commission;
};
void main()
{
	struct HR Harr[5];
	for(int i=0;i<5;i++)
	{
		printf("Enter %d HR details",i+1);
		scanf("%d%s%d%d",&Harr[i].id,Harr[i].name,&Harr[i].salary,&Harr[i].commission);
	}
	
	printf("HR details\n");
	for(int i=0;i<5;i++)
	{
		printf("ID=%d Name=%s Salary=%d Commission=%d\n",Harr[i].id,Harr[i].name,Harr[i].salary,Harr[i].commission);
	}
}