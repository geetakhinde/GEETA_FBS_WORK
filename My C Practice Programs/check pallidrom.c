//check pallidrom or not

#include<stdio.h>
void main()
{
	int num,rem,rev;
	printf("Enter the number");
	scanf("%d",&num);
	int temp=num;
	
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(temp==rev)
	{
		printf("Number is pallidrom");
	}
	else
	{
		printf("Number is not pallidrom");
	}
	
}