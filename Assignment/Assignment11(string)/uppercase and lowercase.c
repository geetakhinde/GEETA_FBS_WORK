//uppercase convert to lowercase and lowercase convert to uppercase

#include<stdio.h>
void main()
{
	char str[10];
	int i=0;
	
	printf("Enter string:");
	scanf("%s",str);
	
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;      //string convert uppercase
//			printf("%c",str[i]);
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;      //string convert lowercase
//			printf("%c",str[i]);
		}
		i++;
			
	}
	printf("\nConverted string=%s",str);
}