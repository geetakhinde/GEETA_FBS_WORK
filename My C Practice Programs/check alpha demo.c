#include<stdio.h>
void main()
{
	int ch;
	printf("Enter the character");
	scanf("%c",&ch);
	
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf("%c  is alphabate",ch);
	}
	else
	{
		printf("%c is not alphabate",ch);
	}
}