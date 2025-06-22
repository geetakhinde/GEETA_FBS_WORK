//Check the given number is Palindrome number or not. 
//Input: n = 121 
//Output: Palindrome 


#include<stdio.h>
void main()
{
	int no=125;
	int rev=0,rem;
	int original=no;
	
	while(no>0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	if(original==rev)
	{
		printf("Pallidrom");
	}
	else
	{
		printf("Not Pallidrom");
	}
}