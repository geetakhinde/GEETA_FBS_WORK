//Write a C program for reading any Month Number and displaying the Month name as a word.

#include<stdio.h>
void main()
{
	int num;
	
	printf("Enter month number: ");
	scanf("%d",&num);
	
	switch (num)
	{
		case 1:
			printf("January");
			break;
		case 2:
			printf("February");
			break;
		case 3:
			printf("March");
			break;
		case 4:
			printf("April");
			break;
		case 5:
			printf("May");
			break;
		case 6:
			printf("June");
			break;
		case 7:
			printf("July");
			break;
		case 8:
			printf("August");
			break;
		case 9:
			printf("September");
			break;
		case 10:
			printf("October");
			break;
		case 11:
			printf("November");
			break;
		case 12:
			printf("December");
			break;
		case 13:
			printf("Invalide choice");
			break;
	}
}