//WAP to Remove the Characters of Odd Index Values in a String 

#include<stdio.h>
void main()
{
	char str[10];
	char result[100];
	int i,j;
	
	printf("Enter string ");
	scanf("%s",str);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(i % 2 == 0)
		{
			result[j]=str[i];
			j++;	
		
		}
	}
	result[j]='\0';
	
	printf("String after removing odd index %s",result);
}