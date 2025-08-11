//print fibonacci series 0 1 1 2 3 5...

#include<stdio.h>
void main()
{
	int num;
	int first=0,second=1;
	
	printf("Enter the number:");
	scanf("%d",&num);
	
	printf("The fibonacci series is: ");
	
	for(int i=0;i<num;i++)
	{
		printf("%d\t",first);
		int third;
		third=first+second;
		first=second;
		second=third;
	}
	
	
}