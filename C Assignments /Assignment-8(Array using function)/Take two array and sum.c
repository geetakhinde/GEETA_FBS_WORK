//Take two array and add sum in third array 
//Example- 
//arr[5]= {1,2, 3, 4,5} 
//brr[5]={10,20,30, 40, 50} 
//crr[5]={11,22,33,44,55} 

#include<stdio.h>
int SumArray(int arr[],int brr[],int crr[],int size);

void main()
{
	
	int arr[5]= {1,2, 3, 4,5};
	int brr[5]={10,20,30, 40, 50}; 
	int crr[5];
	
	printf("The sum of array:");
	SumArray(arr,brr,crr,5);
	
	 
}

int SumArray(int arr[],int brr[],int crr[],int size)
{
	for(int i=0;i<size;i++)
	{
	   crr[i]=arr[i]+brr[i];
	   printf("%d\t",crr[i]);
	}
	
}