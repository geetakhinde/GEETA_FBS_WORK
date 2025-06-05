#include<stdio.h>
int main()
{
	int i;
	float num,sum = 0, average;
	
	printf("enter five numbers : \n");
	for (i=1 ; i<=5 ; i++)
	{
		printf("number %d" i);
		scanf("%f",&num);
		sum += num;
				
	}
	
	average = sum / 5;
	
	printf("the average of the five numbers is: %.2f\n", average);
	return 0;	
	
	
	
	
	
	
}