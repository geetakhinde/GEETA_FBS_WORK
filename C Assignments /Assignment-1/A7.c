#include<stdio.h>
void main()
{
	float bsalary;
	float da,ta,hra,tsalary;
	
	printf("Enter basic salary ");
	scanf("%f",&bsalary);
	
	if(bsalary<=5000)
	{
		da=bsalary*0.10;
		ta=bsalary*0.20;
		hra=bsalary*0.25;
	}
	else
	{
		da=bsalary*0.15;
		ta=bsalary*0.25;
		hra=bsalary*0.30;
	}
	tsalary=da+ta+hra;
	printf("%f",tsalary);
}