package model;

public class House {
	
	int houseId;
	String houseName;
	String ownerName;
	String location;
	
	//default constructor
	public House() {
		
		
	}
	
	//parameterized constructor
	public House(int houseId, String houseName, String ownerName, String location) {
		
		this.houseId = houseId;
		this.houseName = houseName;
		this.ownerName = ownerName;
		this.location = location;
	}

	//setters and getters
	public int getHouseId() {
		return houseId;
	}

	public void setHouseId(int houseId) {
		this.houseId = houseId;
	}

	public String getHouseName() {
		return houseName;
	}

	public void setHouseName(String houseName) {
		this.houseName = houseName;
	}

	public String getOwnerName() {
		return ownerName;
	}

	public void setOwnerName(String ownerName) {
		this.ownerName = ownerName;
	}

	public String getLocation() {
		return location;
	}

	public void setLocation(String location) {
		this.location = location;
	}

	//ToString
	@Override
	public String toString() {
		return "House [houseId=" + houseId + ", houseName=" + houseName + ", ownerName=" + ownerName + ", location="
				+ location + "]";
	}

}

