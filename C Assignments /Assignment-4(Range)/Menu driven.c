//Write a menu driven program to take a number for user and perform operations as follows. 
//Press 1.To check number is even or odd. 
//2.To check number is prime or not. 
//3.To check number is pallindrome or not. 
//4.To check number is positive, negative or zero. 
//5.To reverse a number. 
//6.To find sum of digits.


#include<stdio.h>
void main()
{
	printf("Enter 1 for to ckeck odd or even\n");
	printf("Enter 2 for to check prime or not\n");
	printf("Enter 3 for to check pallidrom or not\n");
	printf("Enter 4 for to check number is zero,positive or negetive\n");
	printf("Enter 5 for to reverse the number\n");
	printf("enter 6 for to find sum of digit\n");
	
	int choice;
	printf("Enter choice\n");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		int num;
		printf("Enter number");
		scanf("%d",&num);
		if(num%2==0)
		{
			printf("Number is even");
		}
		else
		{
			printf("Number is odd");
		}
	}
	else if(choice==2)
	{
			int num;
			printf("Enter number");
			scanf("%d",&num);
			{
				int isprime=1;
				if(num<2)
			{
				isprime=0;
			}
			else
			{
				for(int i=2;i*i<=num;i++)
				{
					if(num%i==0)
					{
						isprime=0;
						break;
					}
				}
			}
			if(isprime)
			{
				printf("%d is a prime number",num);
			}
			else
			{
				printf("%d is not a prime number",num);
			}
			return 0;
	}
	}
	
	else if(choice==3)
	{
		int num,rev,rem;
		printf("Enter number");
		scanf("%d",&num);
		int temp=num;
		while(num>0)
		{
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;
		}
		if(temp==rev)
		{
			printf("Pallidrom");
		}
		else
		{
			printf("Not Pallidrom");
		}
	}
	else if(choice==4)
	{
		int num;
		printf("Enter the number");
		scanf("%d",&num);
		if(num>0)
		{
			printf("Number is positive");
		}
		else if(num<0)
		{
			printf("Number is negetive");
		}
		else if(num==0)
		{
			printf("number is zero");
		}
	}
	else if(choice==5)
	{
		int num,rem,rev;
		printf("Enter the number");
		scanf("%d",&num);
		while(num>0)
		{
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;	
		}
		printf("The reverse number is %d",rev);
	}
	else if(choice==6)
	{
		int num,rem,sum=0;
		printf("Enter the number");
		scanf("%d",&num);
		while(num>0)
		{
			rem=num%10;
			sum=sum+rem;
			num=num/10;
		}
		printf("The sum of digit is %d",sum);
	}
}

	
















/*#include<stdio.h>
void main()
{
	int num;
	printf("Enter number");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}*/


/*/check prime
#include<stdio.h>
void main()
{
	int num,isprime=0;
	printf("Enter number");
	scanf("%d",&num);
	
	if(num<2)
	{
		isprime=0;
	}
	else
	{
		for(int i=0;i<num/2;i++)
		{
			if(num%i==0)
			{
				isprime=0;
				break;
			}
		}
	}
	if(isprime)
	{
		printf("Prime");
	}
	else
	{
		printf("Not prime");
	}
} */

  /*to check pallidrom or not
#include<stdio.h>
void main()
{
	int num,rev,rem;
	printf("Enter number");
	scanf("%d",&num);
	int temp=num;
	
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(temp==rev)
	{
		printf("Pallidrom");
	}
	else
	{
		printf("Not pallidrom");
	}
}*/

/* to ckeck number is zero,positive or negetive
#include<stdio.h>
void main()
{
	int no;
	printf("Enter number");
	scanf("%d",&no);
	
	if(no==0)
	{
		printf("Number is Zero");
	}
	else if(no>0)
	{
		printf("Number is Positive");
	}
	else if(no<0)
	{
		printf("Number is negetive");
	}
}*/


/*to reverse the number
#include<stdio.h>
void main()
{
	int num,rev,rem;
	printf("Enter number");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("%d",rev);
} */

/*to find sum of digit
#include<stdio.h>
void main()
{
	int num,rem,sum=0;
	printf("Enter the number");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("%d",sum);
}*/
