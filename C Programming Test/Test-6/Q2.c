//program to find two maximum number in array

#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter the array elements");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int max,smax;          
	if(arr[0]>arr[1])
	{
	max=arr[0];
	smax=arr[1];
	}
	else
	{
	max=arr[1];
	smax=arr[0];
	}

	for(int i=2;i<5;i++)
	{
		if(arr[i]>max)
		{
			smax=max;
			max=arr[i];
		}
		else if(arr[i]>smax && arr[i]!=max)
		{
			smax=arr[i];
		}
	}
	printf("The two maximum number in this array\n max=%d \n smax=%d",max,smax);
	
}
	
	
