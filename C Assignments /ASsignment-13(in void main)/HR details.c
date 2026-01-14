//HR (id, name, salary, commission) 

struct HR{
	
	int id;
	char name[20];
	int salary;
	int commission;
};

void main()
{
	struct HR h1,h2,h3,h4,h5;
	
	printf("Enter first HR details:");
	scanf("%d %s %d %d",&h1.id,h1.name,&h1.salary,&h1.commission);
	
	printf("Enter second HR details:");
	scanf("%d %s %d %d",&h2.id,h2.name,&h2.salary,&h2.commission);
	
	printf("Enter third HR details:");
	scanf("%d %s %d %d",&h3.id,h3.name,&h3.salary,&h3.commission);
	
	printf("Enter fourth HR details:");
	scanf("%d %s %d %d",&h4.id,h4.name,&h4.salary,&h4.commission);
	
	printf("Enter fifth HR details:");
	scanf("%d %s %d %d",&h5.id,h5.name,&h5.salary,&h5.commission);
	
	printf("HR salary details:\n");
	printf("ID=%d Name=%s Salary=%d Commision=%d\n",h1.id,h1.name,h1.salary,h1.commission);
	printf("ID=%d Name=%s Salary=%d Commision=%d\n",h2.id,h2.name,h2.salary,h2.commission);
	printf("ID=%d Name=%s Salary=%d Commision=%d\n",h3.id,h3.name,h3.salary,h3.commission);
	printf("ID=%d Name=%s Salary=%d Commision=%d\n",h4.id,h4.name,h4.salary,h4.commission);
	printf("ID=%d Name=%s Salary=%d Commision=%d\n",h5.id,h5.name,h5.salary,h5.commission);
}