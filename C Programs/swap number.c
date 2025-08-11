// program for swap of two number

#include<stdio.h>
void main()
{
	int n1,n2;
	int temp;
	printf("Enter n1=");
	scanf("%d",&n1);
	
	printf("Enter n2=");
	scanf("%d",&n2);
	
	temp=n1;
	n1=n2;
	n2=temp;
	
	printf("After swapping \n n1=%d\n n2=%d",n1,n2);
}