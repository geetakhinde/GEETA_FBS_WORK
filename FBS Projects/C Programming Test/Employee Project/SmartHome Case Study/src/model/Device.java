package model;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;

public class Device {
	
	int deviceId;
	String deviceName;
	String deviceType;
	boolean status;
	double powerconsumption;
	LocalDate installationDate;
	List<DeviceStatusLog> statusLogs = new ArrayList<>();
		
		
	//parameterized constructor
	public Device(int deviceId, String deviceName, String deviceType, boolean status, double powerconsumption,
			LocalDate installationDate) {
		
		this.deviceId = deviceId;
		this.deviceName = deviceName;
		this.deviceType = deviceType;
		this.status = status;
		this.powerconsumption = powerconsumption;
		this.installationDate = installationDate;
	}

	

	//setters and getters
	
    public String getCurrentState1() {
        return status ? "ON" : "OFF";
    }
    
	public int getDeviceId() {
		return deviceId;
	}

	public void setDeviceId(int deviceId) {
		this.deviceId = deviceId;
	}

	public String getDeviceName() {
		return deviceName;
	}

	public void setDeviceName(String deviceName) {
		this.deviceName = deviceName;
	}

	public String getDeviceType() {
		return deviceType;
	}

	public void setDeviceType(String deviceType) {
		this.deviceType = deviceType;
	}

	boolean isStatus() {
		return status;
	}

	public void setStatus(boolean status) {
		this.status = status;
	}

	public double getPowerconsumption() {
		return powerconsumption;
	}

	public void setPowerconsumption(double powerconsumption) {
		this.powerconsumption = powerconsumption;
	}

	public LocalDate getInstallationDate() {
		return installationDate;
	}

	public void setInstallationDate(LocalDate installationDate) {
		this.installationDate = installationDate;
	}

	//toString method
	@Override
	public String toString() {
		return "Device [deviceId=" + deviceId + ", deviceName=" + deviceName + ", deviceType=" + deviceType
				+ ", status=" + status + ", powerconsumption=" + powerconsumption + "]";
	}

	public List<DeviceStatusLog> getStatusLogs() {
	    return statusLogs;
	}

	public void addStatusLog(DeviceStatusLog log) {
	    statusLogs.add(log);
	}


	public String getCurrentState() {
		
		    return status ? "ON" : "OFF";
		}


	public void setCurrentState(String state) {
	    if (state.equalsIgnoreCase("ON")) {
	        this.status = true;
	    } else if (state.equalsIgnoreCase("OFF")) {
	        this.status = false;
	    }
	}

	
	

}
