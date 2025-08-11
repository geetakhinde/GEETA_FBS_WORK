package UsingFunction;

public class EvenOdd {

	public static void main(String[] args) {
	
		
			int num=24;
			
			if(num%2==0)
			{
				IsEven(num);
			}
			else 
			{
				IsOdd(num);
			}

	}



public static void IsEven(int num)
{

		System.out.printf("Number is even");
}

public static void IsOdd(int num)
{
	System.out.printf("Number is odd");
}
}