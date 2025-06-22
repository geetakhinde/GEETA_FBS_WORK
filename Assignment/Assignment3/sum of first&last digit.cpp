//Find Sum of first and last digit of given number. 
//Input: n = 12345 
//Output: 6 (1 + 5)

#include<stdio.h>
void main()
{
	int no=12345;
	int fdig,ldig,sum;
	ldig=no%10;
	while(no>0)
	{
		fdig=no%10;
		no=no/10;
	}
	sum=ldig+fdig;
	printf("%d",sum);
}