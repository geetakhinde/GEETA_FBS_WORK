package demo;

public class Que7 {

	public static void main(String[] args) {
		
		int minutes=65;
		int hours,remaining_minutes;
		
		
		hours = minutes / 60;
		remaining_minutes = minutes % 60;
		
		System.out.printf("%d minutes is equal to %d hours(s) and %d minutes(s)\n", minutes,hours, remaining_minutes);

	}

}
