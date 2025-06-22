//Check the given number is Armstrong number or not.. 
//Input: n = 153 
//Output: Armstrong 


#include<stdio.h>
void main()
{
	int no=153,n1,cube,sum=0;
	int temp=no;
	while(no>0)
	{
	n1=no%10; //3
	cube=n1*n1*n1;
	sum=sum+cube;
	no=no/10;
	}
	if(sum==temp)
	{
		printf("Armstrong");
	}
	else
	{
		printf("Not armstrong");
	}
}