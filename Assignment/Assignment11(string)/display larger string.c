//WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions

#include<stdio.h>
void main()
{
	char str1[10],str2[10];
	int len1=0,len2=0,i=0;
	
	printf("Enter first string ");
	scanf("%s",str1);
	
	printf("Enter second string ");
	scanf("%s",str2);
	
	i=0;
	while(str1[i]!='\0' && str1[i]!='\n')
	{
		len1++;
		i++;
	}
	
	i=0;
	while(str2[i]!='\0' && str2[i]!='\n')
	{
		len2++;
		i++;
	}
	
	if(len1>len2)
	{
		printf("%s string is larger",str1);
	}
	else if(len1<len2)
	{
		printf("%s string is larger",str2);
	}
	else
	{
		printf("Both strings are equal");
	}
 } 