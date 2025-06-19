#include<stdio.h>
void main()
{
	int no;
	printf("Enter no");
	scanf("%d",&no);
	
	if(no>0)
		{
		printf("positive");
		}	
		else if(no<0)
				{
				printf("Negative");
				}
				else if(no==0)
					{
					printf("Neutral");
					}
}