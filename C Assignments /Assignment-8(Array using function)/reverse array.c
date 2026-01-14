//Reverse the given array using function

#include<stdio.h>
void main()
{
	int arr[10];
	
	printf("Enter the array elements");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	ReverseArray(arr,10);
	printf("Reverse the given array\n");
	for(int i=0;i<10;i++)
	printf("%d\n",arr[i]);
	
}

ReverseArray(int arr[],int size)
{
	int temp;
	for(int i=0;i<size/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=temp;
		
	}
}