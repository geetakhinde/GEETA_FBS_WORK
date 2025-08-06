package Assignment3;

public class Question6 {

	public static void main(String[] args) {
		
		int no=145;
		int rem,sum=0;
		int ori=no;
		while(no>0)
		{
			rem= no%10;
			int fact=1;
			while(rem>1)
			{
				fact=fact*rem;
				rem--;
			}
			sum=sum+fact;
			no=no/10;

		}
		if(ori==sum)
		{
			System.out.printf("Number is strong");
		}
		else
		{
			System.out.printf("Number is not strong");
		}

}
}