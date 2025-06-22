//Check the given number is prime or not. 
//Input: n = 7 
//Output: Prime 


void main()
{
	int no=7,prime=0;
	for(int i=2;i<no;i++)
	{
		if(no%i==0)
		{
		prime=1;
		break;
		}
	}
	if(prime==0)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}