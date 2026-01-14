/*#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}*/

/* //type-1

void evenodd(); //function declaration
#include<stdio.h>
void main()
{
	evenodd(); //function call
}
	void evenodd() //function defination
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}*/



//type-2

#include<stdio.h>
int evenodd();               //declaration
void main()
{
	if(evenodd()==1)
	{
		printf("even");
	}
	else
	{
		printf("Odd");          //call
	}
}
int evenodd()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	if(num%2==0)
		return 1;                 //defination
	else
		return 0;
}
