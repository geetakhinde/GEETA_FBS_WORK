#include<stdio.h>
void main()
{
	int no,rem,cube,sum;
	printf("Enter the range 1 to :");
	scanf("%d",&no);
	for(int i=1;i<=no;i++)
	{
		while(no>0)
		{
			rem=no%10;
			cube=rem*rem*rem;
			sum=sum+rem;
			no=no/10;	
		}
		if(no==sum)
		{
			printf("%d",sum);
		}
		else
		{
			printf("");
		}
	}
}