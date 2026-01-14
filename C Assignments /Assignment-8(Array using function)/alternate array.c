//Print alternate elements in array using function

#include<stdio.h>
void printAlternate(int arr[],int size);
void main()
{
	int arr[5];
	printf("Enter array elements");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Alternate elements in given array\t");
	printAlternate(arr,5);
}

void printAlternate(int arr[],int size)
{
	for(int i=0;i<size;i+=2)
	{
		printf("%d\t",arr[i]);
	}
}