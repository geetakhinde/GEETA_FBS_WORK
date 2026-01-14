// Replace all Occurrences of ‘a’ with $ in a String 

#include<stdio.h>
void main()
{
	char str[10];
	
	printf("Enter the string:");
	scanf("%s",str);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a')
		{
			str[i]='$';
		}
		
	}
	printf("Modified string: %s ",str);
	
	
}

