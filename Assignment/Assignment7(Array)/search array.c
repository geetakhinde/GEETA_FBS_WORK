//search element in array

#include<stdio.h>
void main()
{
	int num,arr[5], flag=0;
	printf("Enter elements in array");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element you want to search : ");
	scanf("%d",&num);
	
	for(int i=0;i<5;i++)
	{
		if(num==arr[i])
		{
			printf("%d element is found at %d index",num,i);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Element is not found");
	}
}