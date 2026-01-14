//Write a program to check the string is palindrome or not.

#include<stdio.h>
void main()
{
	char str[100];
	int i=0,len=0,flag=0;
	
	printf("Enter string ");
	scanf("%s",str);
	
	while(str[len]!='\0')
	{
		len++;
	}
	
	for(i=0;i<len/2;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag=1;
			break;
		}
	}
	
	if(flag==0)
	{
		printf("String is pallidrom");
	}
	else
	{
		printf("String is not pallidrom");
	}
}