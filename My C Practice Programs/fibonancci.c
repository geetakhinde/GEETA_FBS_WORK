//fibonancci sequence

#include<stdio.h>
void main()
{
	int n,first=0,second=1,next;
	printf("Enter the number");
	scanf("%d",&n);
	
	printf("The fibonancci sequence is:");
	for(int i=0;i<=n;i++)
	{
		printf("%d",first);
		next=first+second;
		first=second;
		second=next;
	}
	printf("\n");
}