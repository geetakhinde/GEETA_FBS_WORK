package Assignment4;

public class ArstrongRange {

	public static void main(String[] args) {
		
		int n=500;

	    

	    for (int i = 1; i <= n; i++) {
	        int num = i;
	        int rem, sum = 0;

	        while (num > 0) {
	            rem = num % 10;
	            sum += rem * rem * rem;
	            num /= 10;
	        }

	        if (sum == i) {
	            System.out.printf("%d ", i);
	        }
	    }

	    

	}

}
