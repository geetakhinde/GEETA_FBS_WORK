package Assignment2;

public class Questione2 {

	public static void main(String[] args) {
		
		int a=12,b=10,c=5;
		if(a==b && b==c && a==c)
		{
			System.out.printf("equilateral");
		}
		else
		if(a==b || b==c || c==a)
		{
			System.out.printf("isosceles");
		}
		else
		if(a!=b || b!=c || c!=a)
		{
			System.out.printf("scalene");
		}

	}

}
