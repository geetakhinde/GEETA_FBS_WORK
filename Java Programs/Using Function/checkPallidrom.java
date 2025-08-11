package UsingFunction;

public class checkPallidrom {

	public static void main(String[] args) {
		
		int num=121;
		
		if(IsPallidrom(num))
		{
			System.out.printf("Number is pallidrom");
		}
		else
		{
			System.out.printf("Number is not pallidrom");
		}

	}

	
public static boolean IsPallidrom(int num)
{
	int temp=num;
	int rem=0,rev=0;
	
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	
	
		return temp==rev;
}
}
