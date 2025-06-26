#include<stdio.h>
void main()
{
	int i,arr[5];
	printf("Enter 5 elements :");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Alternate elements in array : ");
	for(int i=0;i<5;i+=2)
	{
		printf("\t%d",arr[i]);
	}
}