package Assignment4;

public class PrimeRange {

	public static void main(String[] args) {
		
		for(int i=2;i<=100;i++)
		{
			int no=i;
			int flag=0;
			int temp=no;
			for(int j=2;j<=no/2;j++)
			{
				if(no%j==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				System.out.printf("%d\t",temp);
			}
		}
	}

}
