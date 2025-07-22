//Write a program in C to read any digit and display it in the word.

#include<stdio.h>
void main()
{
	int digit;
	
	printf("Enter digit (0-9): ");
	scanf("%d",&digit);
	
	switch (digit)
	{
		case 1:
			{
				printf("One");
				break;
			}
		case 2:
			{
				printf("Two");
				break;
			}
		case 3:
			{
				printf("Three");
				break;
			}
		case 4:
			{
				printf("Four");
				break;
			}
		case 5:
			{
				printf("Five");
				break;
			}
		case 6:
			{
				printf("Six");
				break;
			}
		case 7:
			{
				printf("Seven");
				break;
			}
		case 8:
			{
				printf("Eight");
				break;
			}
		case 9:
			{
				printf("Nine");
				break;
			}
		case 10:
			{
				printf("Invalide choice");
			}
	}
}