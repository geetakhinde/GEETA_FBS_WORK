// Remove the nth Index Character from a Non-Empty String 

#include<stdio.h>
void main()
{
	char str[10];
	int n, len,i;
	
	printf("Enter string:");
	scanf("%s",str);
	
	printf("Enter the index you want to remove:");
	scanf("%d",&n);
	
	len=strlen(str);
	
	if(n<0 || n>=len)
	{
		printf("Invalide index");
	}
	else
	{
		for(int i=n;i<len;i++)
		{
			str[i]=str[i+1];   //shift next character	
		}
	}
	printf("string after removal:%s",str);
	
}