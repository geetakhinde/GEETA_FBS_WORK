#include<stdio.h>
int main()
{
	int minutes,hours,remaining_minutes;
	
	printf("enter the number of minutes:");
	scanf("%d", &minutes);
	
	hours = minutes / 60;
	remaining_minutes = minutes % 60;
	
	printf("%d minutes is equal to %d hours(s) and %d minutes(s)\n", minutes,hours, remaining_minutes);
}