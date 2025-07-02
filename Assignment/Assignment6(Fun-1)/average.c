#include<stdio.h>
int average();    //defination
int main()
{
	average();     //call
}
	int average()    //declaration
{
	int n1=2,n2=3,n3=4,n4=5,n5=7;
	float average;
	
	average=(n1+n2+n3+n4+n5)/5;
	printf("%f",average);
}