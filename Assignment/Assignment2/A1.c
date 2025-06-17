#include<stdio.h>
void main()
{
	int num1,num2;
	char ch;
	
	printf("Enter the number");
	scanf("%d\n%d",&num1,&num2);
	
	printf("1.Enter '+' for addition\n 2.Enter '-' for subtractin\n 3.Enter '* for multiplication\n 4.Enter '/' for division\n 4.Enter '%%' for modulus");
	scanf(" %c",&ch);
	if(ch=='+')
		printf("the addition is %d",num1+num2);
	else
		if(ch=='-')
			printf("the subtraction is %d",num1-num2);
		else
			if(ch=='*')
				printf("the multiplication is %d",num1*num2);
			else
				if(ch=='/')
					printf("the division is %d",num1/num2);
				else
					if(ch=='%')
						printf("the modulus is %d",num1%num2);
					else
						printf("invalid");
						
		
}