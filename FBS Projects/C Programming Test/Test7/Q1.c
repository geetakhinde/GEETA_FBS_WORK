//program to accept array and exchange the data of xth position to yth position

#include<stdio.h>
ExchangeArray(int arr[],int x,int y,int size);
void display(int arr[],int size);
void main()
{
	int arr[5],x,y;
	
	printf("Enter array elements ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter xth position ");
	scanf("%d",&x);
	
	printf("Enter yth position ");
	scanf("%d",&y);
	
	ExchangeArray(arr,x,y,5);
	display(arr,5);
}

ExchangeArray(int arr[],int x,int y,int size)
{
	for(int i=0;i<size;i++)
	{
		int temp;
		temp=arr[x];
		arr[x]=arr[y];
		arr[y]=temp;	
	}
//	printf("%d %d",arr[x],arr[y]);	
}

void display(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}