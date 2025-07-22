// Write a C program to read any day number in integer and display the day name in word format using switch case

#include<stdio.h>
void main()
{
	int dayno;
	
	printf("Enteer dayno: ");
	scanf("%d",&dayno);
	
	switch (dayno) 
		{
			case 1:
				{
					printf("Monday");
					break;
				}
			case 2:
				{
					printf("Tuesday");
					break;
				}
			case 3:
				{
					printf("Wednesday");
					break;
				}
			case 4:
				{
					printf("Thursday");
					break;
				}
			case 5:
				{
					printf("Friday");
					break;
				}
			case 6:
				{
					printf("Saturday");
					break;
				}
			case 7:
				{
					printf("Sunday");
					break;
				}
			case 8:
				{
					printf("Invalide choice");
				}
		}
	
}