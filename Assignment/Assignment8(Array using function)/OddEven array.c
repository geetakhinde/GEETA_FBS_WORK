//Find odd and even among the numbers using function

#include<stdio.h>
printfOdd(int arr[],int size);
printfEven(int arr[],int size);
void main()
{
	
	int arr[5];
	printf("Enter the array elements");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Odd numbers in given array\t");
	printfOdd(arr,5);
	
	printf("\nEven numbers in given array\t");
	printfEven(arr,5);
}

printfOdd(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2!=0)
		printf("%d\t",arr[i]);
	}
}

printfEven(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		printf("%d\t",arr[i]);
	}
}