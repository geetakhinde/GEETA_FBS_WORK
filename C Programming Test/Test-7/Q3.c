//n=4; iteration=5;  o/p:3+33+333+3333+33333

#include<stdio.h>
void main()
{
	int n,m,num=0;
	
	printf("Enter the number ");
	scanf("%d",&n);

	printf("Enter you want to iteration ");
	scanf("%d",&m);
	
	for(int i=1;i<=m;i++)
	{
		num=num*10+n;
		printf("%d",num);
		
		if(i!=m)
		{
			printf("+");
		}
	
	}
	
		
		
}

