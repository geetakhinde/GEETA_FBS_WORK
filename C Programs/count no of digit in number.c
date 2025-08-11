//count number of digit in integer

#include<stdio.h>
void main()
{
	int num,rem,count=0;
	printf("Enter the number ");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		count++;
		num=num/10;
	}
	printf("%d",count);
}