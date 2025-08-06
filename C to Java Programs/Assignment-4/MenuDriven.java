package Assignment4;

public class MenuDriven {

	public static void main(String[] args) {
		
		System.out.printf("Enter 1 for to ckeck odd or even\n");
		System.out.printf("Enter 2 for to check prime or not\n");
		System.out.printf("Enter 3 for to check pallidrom or not\n");
		System.out.printf("Enter 4 for to check number is zero,positive or negetive\n");
		System.out.printf("Enter 5 for to reverse the number\n");
		System.out.printf("enter 6 for to find sum of digit\n");
		
		int choice=1;
		int num=3;
		
		if(choice==1)
		{
			
			if(num % 2==0)
			{
				System.out.printf("Number is even");
			}
			else
			{
				System.out.printf("Number is odd");
			}
		}
		else if(choice==2)
		{
				int num;
			
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
					System.out.printf("%d is a prime number",num);
				}
				else
				{
					System.out.printf("%d is not a prime number",num);
				}
				
		}
		}
		
		else if(choice==3)
		{
			int num,rev,rem;
			
			int temp=num;
			while(num>0)
			{
				rem=num%10;
				rev=rev*10+rem;
				num=num/10;
			}
			if(temp==rev)
			{
				System.out.printf("Pallidrom");
			}
			else
			{
				System.out.printf("Not Pallidrom");
			}
		}
		else if(choice==4)
		{
			int num;
			
			if(num>0)
			{
				System.out.printf("Number is positive");
			}
			else if(num<0)
			{
				System.out.printf("Number is negetive");
			}
			else if(num==0)
			{
				System.out.printf("number is zero");
			}
		}
		else if(choice==5)
		{
			int num,rem,rev;
			
			while(num>0)
			{
				rem=num%10;
				rev=rev*10+rem;
				num=num/10;	
			}
			System.out.printf("The reverse number is %d",rev);
		}
		else if(choice==6)
		{
			int num,rem,sum=0;
			
			while(num>0)
			{
				rem=num%10;
				sum=sum+rem;
				num=num/10;
			}
			System.out.printf("The sum of digit is %d",sum);
		}
	}

	}
