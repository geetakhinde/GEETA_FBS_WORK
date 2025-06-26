#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter elements in array");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Even number:");
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			printf("\t%d",arr[i]);
		}
	}
	printf("\n");
	printf("Odd number:");
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("\t%d",arr[i]);
		}
	}
}