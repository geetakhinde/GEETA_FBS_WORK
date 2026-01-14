//Student (rollNo, name, marks)

struct student{
	
	int rollno;
	char name[20];
	int marks;
};

void main()
{
	struct student s1,s2,s3,s4,s5;
	
	printf("Enter first student details:");
	scanf("%d%s%d",&s1.rollno,&s1.name,&s1.marks);
	
	
	printf("Enter second student details:");
	scanf("%d%s%d",&s2.rollno,&s2.name,&s2.marks);
	
	
	printf("Enter third student details:");
	scanf("%d%s%d",&s3.rollno,&s3.name,&s3.marks);
	
	
	printf("Enter fourth student details:");
	scanf("%d%s%d",&s4.rollno,&s4.name,&s4.marks);
	
	
	printf("Enter fifth student details:");
	scanf("%d%s%d",&s5.rollno,&s5.name,&s5.marks);
	
	printf("Student details:\n");
	printf("Rollno=%d Name=%s Marks=%d\n",s1.rollno,s1.name,s1.marks);
	printf("Rollno=%d Name=%s Marks=%d\n",s2.rollno,s2.name,s2.marks);
	printf("Rollno=%d Name=%s Marks=%d\n",s3.rollno,s3.name,s3.marks);
	printf("Rollno=%d Name=%s Marks=%d\n",s4.rollno,s4.name,s4.marks);
	printf("Rollno=%d Name=%s Marks=%d\n",s5.rollno,s5.name,s5.marks);
}