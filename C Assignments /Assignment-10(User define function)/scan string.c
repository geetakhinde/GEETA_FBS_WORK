//program to scan string from user then scan a single character and search it in a accepted string

#include<stdio.h>
void main()
{
	char str[10];
	int i=0;
	
	printf("Enter string");
	scanf("%s",str);
	
	while(str[i]!='\0')
	{
		printf("%c\n",str);
	}
}
 