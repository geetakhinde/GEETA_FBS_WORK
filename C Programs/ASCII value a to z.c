//find ascii value of 'a' to 'z'

#include<stdio.h>
void main()
{
	int ch;
	printf("ASCII value from 'a' to 'z'  :");
	scanf("%c",&ch);

	for(ch='a';ch<='z';ch++)
	{
		printf("The ASCII value of %c is %d\n",ch,ch);
	}
	

}