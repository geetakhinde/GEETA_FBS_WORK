//WAP to Take in a String and Replace Every Blank Space with special symbol.

#include<stdio.h>
void main()
{
	char str[100];
	
	printf("Enter string ");
	fgets(str,sizeof(str),stdin);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			str[i]='@';
		}
	}
	printf("Modified string: %s",str);
	
}