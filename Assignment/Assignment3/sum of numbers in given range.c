//Sum of numbers in given range. 
//Find sum of numbers from start to end. 
//Input: start = 1, end = 5 
//Output: 15


#include<stdio.h>
void main()
{
	int n1=1, n2=5,sum=0;
	while(n1<=5)
	{
		sum=sum+n1;
		n1++;
	}
	
	printf("%d\n",sum);
}