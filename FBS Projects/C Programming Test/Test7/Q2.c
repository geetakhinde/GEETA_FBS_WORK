//check if the array is pallidrom or not(using function)

#include<stdio.h>
void IsPallidrom(int arr[] ,int size);
void main()
{
	int arr[5];
	printf("Enter array elements ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	
	IsPallidrom(arr,5);
	
	
}

void IsPallidrom(int arr[] ,int size)
{
	int IsPallidrom=1;
		int i=0;
		for(int i=0;i<size/2;i++)
		{
			if(arr[i]!=arr[size-i-1])
			{
				IsPallidrom=0;
				break;
			}
		}
		if(IsPallidrom==1)
		{
			printf("Array is pallidrom");
		}
		else
		{
			printf("Array is not pallidrom");
		}
	
}