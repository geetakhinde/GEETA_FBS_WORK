package model;

public class User {
	
	private int userId;
	private String userName;
	private String contactInfo;
	private String role;
	
	//default constructor
	public User() {
		
		
	}
	
	//parameterized constructor
	public User(int userId, String userName, String contactInfo, String role) {
		super();
		this.userId = userId;
		this.userName = userName;
		this.contactInfo = contactInfo;
		this.role = role;
	}

	//setters and getters
	public int getUserId() {
		return userId;
	}

	public void setUserId(int userId) {
		this.userId = userId;
	}

	public String getUserName() {
		return userName;
	}

	public void setUserName(String userName) {
		this.userName = userName;
	}

	public String getContactInfo() {
		return contactInfo;
	}

	public void setContactInfo(String contactInfo) {
		this.contactInfo = contactInfo;
	}

	public String getRole() {
		return role;
	}

	public void setRole(String role) {
		this.role = role;
	}

	//toString method
	@Override
	public String toString() {
		return "User [userId=" + userId + ", userName=" + userName + ", contactInfo=" + contactInfo + ", role=" + role
				+ "]";
	}
	
	
	
	
	

}
