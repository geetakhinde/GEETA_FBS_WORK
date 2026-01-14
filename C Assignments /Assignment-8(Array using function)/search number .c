#include<stdio.h>
void searchArray(int arr[],int size, int key);        //function declaration
void main()
{
	int arr[5],n,key;
	
	printf("Enter array number");
	scanf("%d",&n);
	
	
	printf("Enter array elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the element you want to find");
	scanf("%d",&key);
	
	searchArray(arr,n,key);       //function call
}

void searchArray(int arr[],int size, int key)        //function definition
{
	int found=0;
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
		printf("%d element found at %d index",key,i);
		found=1;
		break;
		}
		
	}
	if(!found)
	{
		printf("%d element is not found",key);
	
	}
}