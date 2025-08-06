package Assignment4;

public class StrongRange {

	public static void main(String[] args) {
		
		int n=500,a,i,sum=0;
		
		int num=n;
		for(i=1;i<=n;i++)
		{
			int num=i;
			int res=0;
			
			while(num>0)
			{
				a=num%10;
				int fact=1;
				for(int j=1;j<=a;j++)
				{
					fact=fact*j;
				}
				res=res+fact;
				num=num/10;
			}
			if(res==i)
			System.out.printf(" %d is strong\n",i);
	}

}
}