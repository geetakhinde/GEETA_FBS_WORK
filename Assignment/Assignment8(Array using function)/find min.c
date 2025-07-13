// Find minimum  number in array using function

#include<stdio.h>
findMin(int arr[],int n);      //function declaration
void main()

{
	
	int arr[100],n;
	printf("Enter the number of elements:");    //number of size
	scanf("%d",&n);
	
	printf("Enter %d elements of array:",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int Min=findMin(arr,n);                   //function call
	printf("The minimun number in this array is %d",Min);
}


findMin(int arr[],int n)              //function definition
{
	int min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}
	return min;
}
