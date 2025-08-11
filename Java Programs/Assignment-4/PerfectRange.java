package Assignment4;

public class PerfectRange {

	public static void main(String[] args) {
		
		int n=500;


	    System.out.printf("Perfect numbers between 1 and %d are:\n", n);

	    for (int i = 1; i <= n; i++) {
	        int sum = 0;

	       
	        for (int j = 1; j < i; j++) {
	            if (i % j == 0) {
	                sum += j;
	            }
	        }

	        
	        if (sum == i) {
	            System.out.printf("%d ", i);
	        }
	    }


	}

}
