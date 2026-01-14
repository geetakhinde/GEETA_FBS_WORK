//void main()
//{
//	int no=7,prime=0;
//	for(int i=2;i<no;i++)
//	{
//		if(no%i==0)
//		{
//		prime=1;
//		break;
//		}
//	}
//	if(prime==0)
//	{
//		printf("prime");
//	}
//	else
//	{
//		printf("not prime");
//	}
//}

void main()
{
	int num,prime=1;
	printf("Enter the number:");
	scanf("%d",&num);
	
	for(int i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			prime=0;
			break;
		}
	}
	if(prime==1)
	{
		printf("NUmber is prime");
	}
	else
	{
		printf("Number is not prime");
	}
}