//print factors of a number

#include<stdio.h>
void main()
{
	int num;
	printf("Enter the positive number:");
	scanf("%d",&num);
	
	printf("The factors of %d is\n",num);
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		printf("%d\t",i);
	}
}