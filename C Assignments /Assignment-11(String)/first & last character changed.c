//Form a New String where the First Character and the Last Character have been Exchanged 

#include<stdio.h>
void main()
{
	char str[10];
	
	printf("Enter string:");
	scanf("%s",str);
	
	int len=strlen(str);
	
	if(len<2)
	{
		printf("String is too short ");
	}
	else
	{
		char temp;
		temp=str[0];
		str[0]=str[len-1];
		str[len-1]=temp;
	}
	printf("New string is %s",str);
}