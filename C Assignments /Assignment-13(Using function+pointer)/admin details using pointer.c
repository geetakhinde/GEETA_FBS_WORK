//Admin (id, name, salary, allowance)

typedef struct admin{
	
	int ID;
	char name[20];
	int salary;
	int allowance;
}admin;
admin storeAdmin(admin*);
void dispalyAdmin(admin* );
void main()
{
	admin a1,a2,a3,a4,a5;
	
	printf("Enter first admin details:\n");
	storeAdmin(&a1);
	
	printf("Enter second admin details:\n");
	storeAdmin(&a2);
	
	printf("Enter third admin details:\n");
	storeAdmin(&a3);
	
	printf("Enter fourth admin details:\n");
	storeAdmin(&a4);
	
	printf("Enter fifth admin details:\n");
	storeAdmin(&a5);
	
	printf("-------Admin details-------\n");
	dispalyAdmin(&a1);
	dispalyAdmin(&a2);
	dispalyAdmin(&a3);
	dispalyAdmin(&a4);
	dispalyAdmin(&a5);
}
admin storeAdmin(admin* a)
{
	
	printf("Enter Id name salary and allowance");
	scanf("%d",&a->ID);
	scanf("%s",&a->name);
	scanf("%d",&a->salary);
	scanf("%d",&a->allowance);
	
}
void dispalyAdmin(admin* x)
{
	printf("ID=%d Name=%s Salary=%d Allowance=%d\n",x->ID,x->name,x->salary,x->allowance);
}