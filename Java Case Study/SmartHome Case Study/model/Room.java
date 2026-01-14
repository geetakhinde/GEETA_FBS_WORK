
package model;

import java.util.List;

public class Room {
	
	int roomId;
	String houseName;
	String roomtype;
	List<Device> deviceList;
	
	//default constructor
	public Room() {
		
		
	}
	
	//parameterized constructor
	public Room(int roomId, String houseName, String roomtype, List<Device> deviceList) {
		super();
		this.roomId = roomId;
		this.houseName = houseName;
		this.roomtype = roomtype;
		this.deviceList = deviceList;
	}

	//setters and getters
	public int getRoomId() {
		return roomId;
	}

	public void setRoomId(int roomId) {
		this.roomId = roomId;
	}

	public String getHouseName() {
		return houseName;
	}

	public void setHouseName(String houseName) {
		this.houseName = houseName;
	}

	public String getRoomtype() {
		return roomtype;
	}

	public void setRoomtype(String roomtype) {
		this.roomtype = roomtype;
	}

	public List<Device> getDeviceList() {
		return deviceList;
	}

	public void setDeviceList(List<Device> deviceList) {
		this.deviceList = deviceList;
	}

	//toString method
	@Override
	public String toString() {
		return "Room [roomId=" + roomId + ", houseName=" + houseName + ", roomtype=" + roomtype + "]";
	}
	
	
	
	

}
