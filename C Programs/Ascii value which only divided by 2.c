//ascii value from A to Z which only divided by 2

#include<stdio.h>
void main()
{
	int c;
	char ch;
	printf("ASCII value from A to Z which only divided by 2");
	scanf("%c",&ch);
	
	for(ch='A';ch<='Z';ch++)
	{
		if(ch%2==0)
		printf("The ASCII value of %c is %d\n",ch,ch);
	}
}