//program for to find common elements in two arrays
//e.g arr=1 2 3 4 5
//    brr=1 6 7 3 2
//  o/p:1 2 3 


#include<stdio.h>
void main()
{
	int arr[5];
	int brr[5];
	
	printf("Enter elements in arr");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	
	}
	
	printf("Enter elements in brr");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	
	}
	printf("Common elements\n");
	for(int i=0;i<5;i++)       //for arr[i]
	{
		for(int j=0;j<5;j++)    //for brr[i]
		
		if(arr[i]==brr[j])
			{
				
				printf("%d\t",arr[i]);
			}
	}
	
	
	
}