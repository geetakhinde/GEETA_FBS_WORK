#include<Stdio.h>
void main()
{
	int unit;
	printf("Enter units");
	scanf("%d",&unit);
	
	if(unit>=1 && unit<=50)
		printf("\n electricity bill is %d",30*unit);
	else if(unit>=51 && unit<=150)
		printf("\n electricity bill is %d",40*unit);
	else if(unit>151)
		printf("\n electricity bill is %d",50*unit);
	else
		printf("\n unit is invalid");
		
				
}
