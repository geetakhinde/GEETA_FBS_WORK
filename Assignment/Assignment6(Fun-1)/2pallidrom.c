#include<stdio.h>
void pallidrom(); //function call
void main()


{
	pallidrom(); //function defination
}
	void pallidrom() //function declaration
	{
		int no=123;
	if (no%10== no/100)
		printf("pallidrom");
	else
		printf("not pallidrom");
	}
