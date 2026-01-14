// user define function for mystrcmp

#include<stdio.h>
int mystrcmp(char*,char*);
void main()
{
	char str1[10]="apple";
	char str2[10]="apples";

	int result=mystrcmp(str1,str2);
	
	if(result==0)
	{
		printf("strings are equal\n");
	}
	else if(result>0)
	{
		printf("str1 is greater than str2");
	}
	else if(result<0)
	{
		printf("str2 is greater than str1");
	}
}
int mystrcmp(char* str1,char* str2)    //function defunation
{
	int i=0;
	while(str1[i]!='\0' && str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		return str1[i]-str2[i];
		i++;
		
	}
	return str1[i]-str2[i];
	
	
}