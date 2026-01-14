//Sort the array using function

#include<stdio.h>
void SortArray(int arr[],int size);
void main()
{
	int arr[10];
	printf("Enter the elements of array");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	SortArray(arr,10);
	printf("The sorted array is:");
	for(int i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
}

void SortArray(int arr[],int size)
{
	int temp;
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}	
}