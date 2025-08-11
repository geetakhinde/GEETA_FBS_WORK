package Assignment2;

public class Question6 {

	public static void main(String[] args) {
		
		int age=10;
		if(age<12)
		{
			System.out.printf("Child");
		}
		else
		{
			if(age>=12&&age<=19)
			{
				System.out.printf("Teenager");
			}
			else
			{
				if(age<=20 && age>=59)
				{
					System.out.printf("Adult");
				}
				else
				{
					if(age>=60)
					{
						System.out.printf("Senior");
					}
				}
				
			}
			
		}

	}

}
