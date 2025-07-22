//Write a program in C to read any Month Number in integer and display the number of days for this month.

#include<stdio.h>
void main()
{
	int num;
	
	printf("Enter month number: ");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
			printf("Month=January Days=31");
			break;
		case 2:
			printf("Month=February Days=28 or 29");
			break;
		case 3:
			printf("Month=March Days=31");
			break;
		case 4:
			printf("Month=April Days=30");
			break;
		case 5:
			printf("Month=May Days=31");
			break;
		case 6:
			printf("Month=June Days=30");
			break;
		case 7:
			printf("Month=July Days=31");
			break;
		case 8:
			printf("Month=August Days=31");
			break;
		case 9:
			printf("Month=September Days=30");
			break;
		case 10:
			printf("Month=October Days=31");
			break;
		case 11:
			printf("Month=November Days=30");
			break;
		case 12:
			printf("Month=December Days=31");
			break;
		default :
			printf("Invalid choice. Enter number between 1 and 12");
		
		
		
	}
}