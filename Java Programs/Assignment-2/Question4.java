package Assignment2;

public class Question4 {

	public static void main(String[] args) {
		
		int marks=80;
		if(marks>=75)
		{
			System.out.printf("Distinction");
		}
		else
		{
			if(marks>=65)
			{
				System.out.printf("First Class");
			}
			else
			{
				if(marks>=55)
				{
					System.out.printf("Second Class");
				}
				else
				{
					if(marks>=40)
					{
						System.out.printf("pass");
					}
					else
					{
						System.out.printf("fail");
					}
				}
			}
		}

	}

}
