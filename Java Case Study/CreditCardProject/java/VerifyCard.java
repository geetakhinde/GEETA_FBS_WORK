package p1;


public class VerifyCard {

	public boolean isValid(String v1,String v2,String v3,String v4){
		
	
		//Create object of DatabaseConnectivity
		DatabaseConnectivity db = new DatabaseConnectivity();
		
		//Call database method
		boolean result = db.isValid(v1, v2, v3, v4);
		
		return result;
	}



}