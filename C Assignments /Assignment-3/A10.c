#include<stdio.h>
void main()
{
	int no=5672;
	int fdig,ldig,sum;
	ldig=no%10;
	while(no>0)
	{
		fdig=no%10;
		no=no/10;
	}
	sum=ldig+fdig;
	printf("sum=%d",sum);
}