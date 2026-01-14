//user define function for mystrcpy

#include<stdio.h>
char* stringcopy(char*,char*);
void main()
{
	char str1[20]="firstbitsolutions";
	char str2[20];
	char* res=stringcopy(str2,str1);
	printf("%s",res);	
}
char* stringcopy(char*str2, char*str1)
{
	int i=0;
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
	return str2;
}