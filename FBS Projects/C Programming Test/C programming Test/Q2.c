//program to print following series:
// 1+11+111+111.....+n times

#include<stdio.h>
void main()
{
	int n,m,num=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	printf("Enter the number for you want how many iteration :");
	scanf("%d",&m);
	
	for(int i=1;i<=m;i++)
	{
		
		num=num*10+n;
		printf("%d",num);
		
		if(n!=m)
		{
			printf("+");
		}
		
	}
//	printf("%d",num);
}