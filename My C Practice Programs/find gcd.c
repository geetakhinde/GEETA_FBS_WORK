//find gcd

#include<stdio.h>
void main()
{
	int n1,n2,i,gcd;
	printf("Enter n1 and n2:");
	scanf("%d %d",&n1,&n2);
	
	for(int i=1;i<=n1&&i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		gcd=i;
	
	}
	printf("%d and %d is gcd = %d",n1,n2,gcd);
}