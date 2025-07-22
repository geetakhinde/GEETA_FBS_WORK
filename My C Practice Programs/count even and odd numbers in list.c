//count the number of even and odd numbers in a list.

#include<stdio.h>
void main()
{
	int arr[10]; 
	int evencount=0, oddcount=0;
	
	printf("Enter the numbers:");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	
		if(arr[i]%2==0)
		{
			evencount++;
		}
		else
		{
			oddcount++;	
		}

	}
	printf("Even number of count=%d\n",evencount);
	printf("Odd number of count=%d",oddcount);
}