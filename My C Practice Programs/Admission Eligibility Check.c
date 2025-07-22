//Write a C program to determine eligibility for admission to a professional course based on the following criteria:
//Eligibility Criteria : Marks in Maths>=65 and Marks in Phy>=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140.
// Enter the marks obtained in Physics :65 
//Enter the marks obtained in Chemistry :51
// Enter the marks obtained in Mathematics :72
// Total marks of Maths, Physics and Chemistry : 188 
//Total marks of Maths and Physics : 137 
// O/P:- The candidate is not eligible.

#include<stdio.h>
void main()
{
	int marks,phy,chem,math,total,Tmark;
	
	printf("Enter the marks obtained in Physics : ");
	scanf("%d",&phy);
	
	printf("Enter the marks obtained in Chemistry : ");
	scanf("%d",&chem);
	
	printf("Enter the marks obtained in Mathematics : ");
	scanf("%d",&math);
	
	
	total=phy+chem+math;
	Tmark=phy+math;
	
	printf("\n-----MARKS DETAILS-----\n");
	
	printf("Total marks obtained : %d\n",total);
	printf("Total marks of maths+physics : %d\n",Tmark);
	
	
	if(math>=65)
	{
		if(chem>=50)
		{
			if(phy>=55)
			{
				if(total>=190 || Tmark>=140)
				{
					printf("\nThe candidate is eligible.");
				}
				else
				{
					printf("\nThe candidate is not eligible.");
				}
			}
			else
			{
				printf("\nLess marks in Physics\nThe candidate is not eligible.");
			}
		}
		else 
		{
			printf("\nLess marks in Chemistry\nThe candidate is not eligible.");
		}
	}
	else
	{
		printf("\nLess marks in Mathematics\nThe candidate is not eligible.");
	}
	
}