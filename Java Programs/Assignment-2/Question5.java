package Assignment2;

public class Question5 {

	public static void main(String[] args) {

		
		int no=9;
		if(no%3==0 && no%5!=0)
		{
			System.out.printf("Divisible by 3 but not 5");
		}
		else if(no%3!=0 && no%5==0)
		{
			System.out.printf("Divisible by 5 but not 3");
		}
		else if(no%3==0 && no%5==0)
		{
			System.out.printf("Divisible by both");
		}
		else if(no%3!=0 && no%5!=0)
		{
			System.out.printf("Divisible by none");
		}

	}

}
