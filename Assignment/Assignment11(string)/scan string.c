//program to scan string from user then scan a single character and search it in a accepted string

#include<stdio.h>
void main()
{
	char str[10];
	int i=0;
	int found=0;
	char ch;
	
	printf("Enter string ");
	scanf("%s",str);
	
	printf("Enter the string you want to find:");
	scanf(" %c",&ch);

	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			printf("%c element found at %d index\n",ch,i);
			found=1;
		}
	}
	if(!found)
	{
		printf("Element not found");
	}
	
}
 