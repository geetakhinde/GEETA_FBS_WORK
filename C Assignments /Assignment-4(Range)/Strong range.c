//Print strong numbers in the given range 1 to n. 



#include<Stdio.h>
void main()
{
	int n,a,i,sum=0;
	printf("Enter the range 1 to ");
	scanf("%d",&n);
	int num=n;
	for(i=1;i<=n;i++)
	{
		int num=i;
		int res=0;
		
		while(num>0)
		{
			a=num%10;
			int fact=1;
			for(int j=1;j<=a;j++)
			{
				fact=fact*j;
			}
			res=res+fact;
			num=num/10;
		}
		if(res==i)
		printf(" %d is strong\n",i);
//		else
//		printf("%d is not Strong\n",i);
	}
}
