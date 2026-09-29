// program to count number of words in a string

#include<stdio.h>
void main()
{
	char str[100];
	int count=0;
	
	printf("Enter the string:");
	gets(str);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if((i==0 && str[i]!='\0' && str[i]!='\n') || (str[i]!=' ' && str[i-1]==' '))
		{
			
			count++;
			
		}
	}
	printf("The no of words in string is %d",count);
}