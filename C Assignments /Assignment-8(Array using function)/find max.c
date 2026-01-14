// Find maximum  number in array using function

#include<stdio.h>
findMax(int arr[],int n);
void main()
{
	
	int arr[20],n;
	printf("Enter array elements");
	scanf("%d",&n);
	
	printf("Enter %d elements in array",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	int max=findMax(arr,n);
	printf("The maximum number in array is %d",max);
	
}
findMax(int arr[],int n)
{
	int max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		
	}
	return max;
}
