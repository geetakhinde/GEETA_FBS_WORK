package Assignment3;

public class Question7 {

	public static void main(String[] args) {
		
		
		int no=56723;
		int fdig,ldig,sum=0;
		ldig=no%10;
		while(no>10)
		{
			
			no=no/10;
		}
		fdig=no;
		sum=ldig+fdig;
		System.out.printf("sum=%d",sum);
}
}