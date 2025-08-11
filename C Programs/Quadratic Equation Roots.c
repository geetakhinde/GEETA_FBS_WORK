//Write a C program to calculate the root of a quadratic equation.
//Test Data : 1 5 7
//Expected Output :
//Root are imaginary;
//No solution.

#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d;
	float x1,x2;
	
	printf("Enter the a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	
	d=b*b-4*a*c;
	
	if(d==0)
	{
		printf("Roots are equal");
		x1=-b/(2*a);
		x2=x1;
		printf("X1=%f\n",x1);
		printf("X2=%f",x2);
	}
	else if(d>0)
	{
		printf("Roots are real and different");
		x1=(-b + sqrt(d)) / (2 * a);
		x2=(-b - sqrt(d)) / (2 * a);
		printf("X1=%f\n",x1);
		printf("X2=%f",x2);
	}
	else if(d<0)
	{
		printf("Roots are imaginary\n so no solution");
	}
}