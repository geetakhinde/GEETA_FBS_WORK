//merge two array

#include<stdio.h>
void main()
{
	int arr[5];
	int brr[5];
	int merged[10];
	
	printf("Enter elements in arr:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter elements in brr:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	
	printf("If we merge two array:");
	for(int i=0;i<5;i++)
	{
		merged[i]=arr[i];
	}
	
	for(int i=0;i<5;i++)
	{
		merged[i+5]=brr[i];
	}
	for(int i=0;i<10;i++)
	{
		printf("%d",merged[i]);
	}
	
}