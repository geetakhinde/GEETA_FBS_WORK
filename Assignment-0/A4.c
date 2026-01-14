#include <stdio.h>
int main()
{
	int a=20;
	int b=30;
	int temp;
	
	printf("before swapping a=%d and b=%d\n\n",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("After swapping a=%d and b=%d",a,b);
}