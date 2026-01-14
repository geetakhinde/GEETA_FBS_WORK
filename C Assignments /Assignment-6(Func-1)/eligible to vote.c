void eligible(); //function name
#include<stdio.h>
void main()
{
	eligible(); //function declaration
}
	void eligible() //function defination
	{
	int age;
	printf("Enter age");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("person is eligible");
	}
	else
	{
		printf("person is not eligible");
	}
}