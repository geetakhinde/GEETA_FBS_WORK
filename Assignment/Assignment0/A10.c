#include<stdio.h>
int main()
{
	float marks[5], total = 0,percentage;
	int i;
	
	printf("enter marks for 5 subjects:\n");
	for (i=0; i<5; i++)	
	{
		printf("subject %d:", i+1);
		scanf("%f",&marks[i]);
		total += marks[i];
	}
	percentage = (total / 500) * 100;
	
	printf("total marks: %.2f\n",total);
	printf("percentage: %.2f%%\n", percentage);
	
}