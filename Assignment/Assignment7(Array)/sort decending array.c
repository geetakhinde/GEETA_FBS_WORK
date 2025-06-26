//sort the array

#include<stdio.h>
void main()
{
	int arr[100],n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	printf("Enter elements in array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	//bubble sort algorithm
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Sorted array in decending order:");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}