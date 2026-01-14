//to find min number in array

#include<stdio.h>
void main()
{
	int arr[6];
	printf("Enter array element");
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	int min=arr[0];
	for(int i=0;i<6;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		
	}
	printf("Minimun number in the array=%d",min);
}