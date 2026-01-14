//to find max number in array

#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter the array element");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	for(int i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("The maximum number in this array is %d",max);
}