// to Count the Number of Vowels in a String 

#include<stdio.h>
void main()
{
	char str[10];
	int i;
	int count=0;
	
	printf("Enter string ");
	scanf("%s",str);
	
	while(str[i]!='\0')
	{
		if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		{
			count++;
		}
		i++;
		
	}
	printf("No of vowels=%d",count);
}