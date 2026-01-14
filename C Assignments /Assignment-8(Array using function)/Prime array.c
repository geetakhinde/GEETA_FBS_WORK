//Accept array and print only prime numbers of array using function


#include<stdio.h>
void printPrime(int arr[],int size);
void main()
{
	int arr[10];
	printf("Enter array elements");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Prime numbers in given array");
	printPrime(arr,10); 
}

void printPrime(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		int isPrime=1;
		if(arr[i]<=1)
		continue;
		
		for(int j=2;j<=arr[i]/2;j++)
		{
			if(arr[i]%j==0)
			{
				isPrime=0;
				break;
			}
		}
		if(isPrime==1)
		{
			printf("%d\t",arr[i]);
		}
	}
	
	
}