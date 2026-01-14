//reverse the given array

#include<stdio.h>
void main()
{
	int arr[100],n;
	printf("Enter the size of array:");   //print size of array
	scanf("%d",&n);
	
	printf("enter array elements:");     //enter array element
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Original array:");
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	
	for(int i=0;i<n/2;i++)
	{
		int temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}
	printf("\n");
	
	printf("Reverse array:");
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}