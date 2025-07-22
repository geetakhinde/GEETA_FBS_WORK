//check character is alphabate or not

#include<stdio.h>
void main()
{
	char ch;
	printf("Enter character");
	scanf("%c",&ch);
	
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf("character is alphabate");
	}
	else
	{
		printf("character is not alphabate");
	}
}