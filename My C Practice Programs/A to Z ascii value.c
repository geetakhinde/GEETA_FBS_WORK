//ASCII value from 'A' to 'Z'

#include<stdio.h>
void main()
{
	int ch;
	printf("The ASCII value from 'A' to 'Z' :");
	scanf("%c",&ch);
	
	for(ch='A';ch<='Z';ch++)
	{
		printf("The ASCII value of %c is %d\n",ch,ch);
	}
}