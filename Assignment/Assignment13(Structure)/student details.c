//Student (rollNo, name, marks)

#include<stdio.h>
struct student{
	
	int rollno;
	char name[20];
	int marks; 
};
struct student storeStudent();
void displayStudent(struct student s1);
void main()
{
	struct student s1,s2;
	
	printf("Enter first student detail:");
	s1=storeStudent();
	
	printf("Enter second student detail:");
	s2=storeStudent();
	
	printf("Students details:");
	displayStudent(s1);
	displayStudent(s2);
	
}
struct student storeStudent()
{
	struct student s1;
	scanf("%d%s%d",&s1.rollno,&s1.name,&s1.marks);
	return s1;
}
void displayStudent(struct student s1)
{
	printf("Rollno=%d Name=%s Marks=%d\n",s1.rollno,s1.name,s1.marks);
}
