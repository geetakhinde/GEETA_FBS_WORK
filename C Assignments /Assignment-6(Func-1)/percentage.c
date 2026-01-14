#include<stdio.h>
int Ispercent();      //defination
int main()
{
	Ispercent();       //call
}
	int Ispercent()     //declaration
{
	int n1=25,n2=35,n3=45,n4=61,n5=44;
	float total,percentage;
	
	total=n1+n2+n3+n4+n5;
	printf("total=%f",total);
	
	percentage=(total/500)*100;
	printf("percentage=%f",percentage);
}