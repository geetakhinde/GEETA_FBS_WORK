//program for compute quotient and remainder

#include<stdio.h>
void main()
{
	int divident,quotient,remainder,divisor;
	printf("Enter divident ");
	scanf("%d",&divident);
	
	printf("Enter divisor");
	scanf("%d",&divisor);
	
	quotient=divident/divisor;
	printf("Quotient=%d\n",quotient);
	
	remainder=divident%divisor;
	printf("Remainder=%d",remainder);
}