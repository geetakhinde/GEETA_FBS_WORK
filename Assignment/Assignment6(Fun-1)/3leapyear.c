#include<stdio.h>
void leapyear(); //function call
void main()
{
	leapyear(); //function defination
	
}
		void leapyear() //function declaration
		{
			int year =1900;
			if(year%4==0 && year%100!=0 || year%400==0)
			{
				printf("year is leap");
			}
			else
			{
				printf("year is not leap");
			}
		}
	

