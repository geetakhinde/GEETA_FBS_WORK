//find power of a number

#include<stdio.h>
void main()
{
	int num,exp;
	float result=1;
	printf("Enter the number:");
	scanf("%d",&num);
	
	printf("Enter the exponenet:");
	scanf("%d",&exp);
	
	while(exp!=0)
	{
		result=result*num;
		exp--;
	}
	printf("%.2f",result);
}