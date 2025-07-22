// using switch case menu driven

#include<stdio.h>
void main()
{
	char op;
	double a,b,res;
	
	printf("Enter the operator: (+,-,*,/) ");
	scanf(" %c",&op);
	
	printf("Enter the value of a and b: ");
	scanf("%lf%lf",&a,&b);
	
	switch(op)
	{
		case '+':
		{
			res=a+b;
			printf("Addition of %2.lf and %2.lf = %2.lf",a,b,res);
			break;
		}
		case '-':
		{
			res=a-b;
			printf("Subtraction of %2.lf and %2.lf = %2.lf",a,b,res);
			break;
		}
		case '*':
		{
			res=a*b;
			printf("Multiplication of %2.lf and %2.lf = %2.lf",a,b,res);
			break;
		}
		case '/':
		{
			res=a/b;
			printf("Division of %2.lf and %2.lf = %2.lf",a,b,res);
			break;
		}
	}
}