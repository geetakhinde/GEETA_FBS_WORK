// Merge two arrays using function

#include<stdio.h>
void MergeArray(int arr[],int brr[],int merged[],int size);       //function declaration
void main()
{
	
	int arr[5];
	int brr[5];
	int merged[10];
	
	printf("Enter arr elements");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter brr elements");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	

	MergeArray(arr,brr,merged,5);    //function call
	
	printf("Merge array:\t");
	for(int i=0;i<10;i++)
		{
			printf("%d\t",merged[i]);
		}
}

void MergeArray(int arr[],int brr[],int merged[],int size)       //function definition
{
	for(int i=0;i<size;i++)
	{
		merged[i]=arr[i];
	}
	
	for(int i=0;i<size;i++)
	{
		merged[i+size]=brr[i];
	}
	
	
}