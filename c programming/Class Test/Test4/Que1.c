//program to find power of any number

#include<stdio.h>
void main()
{
	int base,exp,result=1;
	printf("Enter base");
	scanf("%d",&base);
	printf("Enter exp");
	scanf("%d",&exp);
	
	while(exp!=0)
	{
		result=result*base;
		exp--;
	}
	printf("%d",result);
}