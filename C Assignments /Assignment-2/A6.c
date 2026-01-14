#include<stdio.h>
void main()
{
	int no=11;
	if(no%3==0 && no%5!=0)
	{
		printf("Divisible by 3 but not 5");
	}
	else if(no%3!=0 && no%5==0)
	{
		printf("Divisible by 5 but not 3");
	}
	else if(no%3==0 && no%5==0)
	{
		printf("Divisible by both");
	}
	else if(no%3!=0 && no%5!=0)
	{
		printf("Divisible by none");
	}
}