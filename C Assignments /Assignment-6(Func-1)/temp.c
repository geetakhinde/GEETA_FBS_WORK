#include<stdio.h>
int temp();    //declaration
int main() 
{
	temp();       //call
}
	int temp()    //defination
{
	float celsius, fahrenheit;
	printf("enter temperature in celsius :");
	scanf("%f",&celsius);
	fahrenheit = (celsius * 9/5) + 32;
	printf("%.2f celsius is equal to %.2f fahrenheit \n", celsius, fahrenheit);
	
	return 0;	
	
	
	
}