#include <stdio.h>
int main()
{

	int num1,num2,temp;
	printf("enter first number:");
	scanf("%d",&num1);
	printf("%d",&num2);
	
	printf("before swapping :\n");
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n",num2);
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	printf("after swapping :\n");
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n",num2);
	
	return 0;
	
}