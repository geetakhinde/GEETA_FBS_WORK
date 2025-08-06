package Assignment1;

public class basic_salary {

	public static void main(String[] args) {
		
		double bsalary=2000;
		double da,ta,hra,tsalary;
		
		
		if(bsalary<=5000)
		{
			da=bsalary*0.10;
			ta=bsalary*0.20;
			hra=bsalary*0.25;
		}
		else
		{
			da=bsalary*0.15;
			ta=bsalary*0.25;
			hra=bsalary*0.30;
		}
		tsalary=da+ta+hra;
		System.out.printf("%f",tsalary);

	}

}
