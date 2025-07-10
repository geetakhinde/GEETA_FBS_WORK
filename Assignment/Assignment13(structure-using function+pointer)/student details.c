typedef struct student{
	
	int rollno;
	char name[20];
	
}student;
void  storeStudent(student*);
void displayStudent(student*);

void main()
{
	student s1;
	storeStudent(&s1);
	displayStudent(&s1);
}
void  storeStudent(student* stud)
{
	
	printf("Enter rollno and name");
	scanf("%d",&stud->rollno);
	scanf("%s",&stud->name);
	
}
void displayStudent(student* stud)
{
	printf("Rollno=%d and Name=%s",stud->rollno,stud->name);
}