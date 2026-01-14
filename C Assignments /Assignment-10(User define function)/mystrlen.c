//user define function for mystrlen

#include<stdio.h>
void main()
{
	char str[10]="firstbit";
	int res=stringlen(str);
	printf("%d",res);
	
}
int stringlen(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}