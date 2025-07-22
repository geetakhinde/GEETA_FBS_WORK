#include<stdio.h>
void main()
{
	
	int fatherage=45;
	int sonage=20;
	int year=0;
	
	while(fatherage != 2* sonage)
	{
		fatherage++;
		sonage++;
		year++;
	}
	
	printf("Father age=%d Son age=%d Year=%d",fatherage,sonage, year);
}