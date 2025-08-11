//Write a C program to read the roll no, name and marks of three subjects and calculate the total, percentage and division.

#include<stdio.h>
void main()
{
	int rollno,phy,chem,computer;
	char name[10];
	
	printf("Enter rollo no: ");
	scanf("%d",&rollno);
	
	printf("Enter name: ");
	scanf("%s",&name);
	
	printf("Enter physics marks: ");
	scanf("%d",&phy);
	
	printf("Enter chemistry marks: ");
	scanf("%d",&chem);
	
	printf("Enter computer marks: ");
	scanf("%d",&computer);
	
	int total=phy+chem+computer;
	printf("Total marks=%d\n",total);
	
	float percentage=(total/300.0)*100;
	printf("Percentage=%2.f\n",percentage);
	
	if(total>65)
	{
		printf("First");
	}
	else if(total<65 && total>=55)
	{
		printf("Second");
	}
	else if(total<55 && total>=45)
	{
		printf("Third");
	}
	else if(total<45 && total>=35)
	{
		printf("Pass");
	}
	else
	{
		printf("Fail");
	}
}