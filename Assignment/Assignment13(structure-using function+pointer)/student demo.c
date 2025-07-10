
typedef struct student{
	
	int rollno;
	char name[20];
	int marks;
}student;
 student storeStudent(student*);
 void displayStudent(student*);
void main()
{
	student s1,s2;
	storeStudent(&s1);
	storeStudent(&s2);
	
	printf("Student details:\n");
	displayStudent(&s1);
	displayStudent(&s2);
	
}
 student storeStudent(student* x)
{
	
	printf("Enter rollno name and marks");
	scanf("%d\n",&x->rollno);
	scanf("%s\n",&x->name);
	scanf("%d",&x->marks);
	
}
void displayStudent(student* x)
{
	
	printf("Rollno=%d Name=%s Marks=%d\n",x->rollno,x->name,x->marks);
}
