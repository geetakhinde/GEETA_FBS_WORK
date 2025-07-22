#include<stdio.h>
void main()
{
	int fatherage;
	int sonsage;
	
	printf("Enter fathers age and sons age");
	scanf("%d%d",&fatherage,&sonsage);
	
	int i=0;
	while(fatherage*2>sonsage)
	{
		fatherage=fatherage+i;
		sonsage=sonsage+i;
		{
			if(fatherage == 2*(sonsage))
		 	printf("%d",i);
		}
	}
	
	
}