// Find sum of all numbers using function

#include<stdio.h>
void sumArray(int arr[],int sum);
void main()
{
	
	int arr[5];
	int sum=0;
	printf("Enter array elements");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	sumArray(arr,sum);
}

void sumArray(int arr[],int sum)
{
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	
	}
	printf("Sum=%d",sum);
	
}