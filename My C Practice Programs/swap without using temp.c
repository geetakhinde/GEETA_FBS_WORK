//swap of two numbers without using third variable

#include<stdio.h>
void main()
{
	int n1,n2;
	printf("Enter n1=");
	scanf("%d",&n1);
	
	printf("Enter n2=");
	scanf("%d",&n2);
	
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("After swapping\n n1=%d\n n2=%d",n1,n2);
}