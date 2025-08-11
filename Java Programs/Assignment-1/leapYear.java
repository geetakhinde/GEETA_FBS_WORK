package Assignment1;

public class leapYear {

	public static void main(String[] args) {
		
		int year = 2025;
		if(year%4==0 && year%400==0 || year%100!=0)
		{
			System.out.printf("year is leap");
		}
		else
		{
			System.out.printf("year is not leap");
		}

	}

}
