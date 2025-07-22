//find lcm

#include<stdio.h>
void main()
{
	int n1,n2,max,lcm;
	printf("Enter n1 and n2 :");
	scanf("%d%d",&n1,&n2);
	
	max=(n1>n2)?n1:n2;   //find n1 greater or n2
	lcm=max;
	
	if((lcm%n1!=0)||(lcm%n2!=0))
	{
	lcm=lcm+max;
	}
	
	printf("%d and %d lcm is %d",n1,n2,lcm);
	
	
}