package Assignment3;

public class Question4 {

	public static void main(String[] args) {
		
		int no=8,prime=0;
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
			System.out.printf("prime");
		}
		else
		{
			System.out.printf("not prime");
		}

	}

}
