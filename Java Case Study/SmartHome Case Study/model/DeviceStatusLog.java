package model;

import java.time.LocalDateTime;

public class DeviceStatusLog {
	
	private int logId;
	private LocalDateTime startTime;
	private LocalDateTime endTime;
	private long duration;
	private String currentState;
	
	//default constructor
	public DeviceStatusLog() {
		
		
	}

	//parameterized constructor
	public DeviceStatusLog(int logId, LocalDateTime startTime, LocalDateTime endTime, long duration, String currentState) {
		super();
		this.logId = logId;
		this.startTime = startTime;
		this.endTime = endTime;
		this.duration = duration;
		this.currentState = currentState;
	}

	//setters and getters
	public int getLogId() {
		return logId;
	}

	public void setLogId(int logId) {
		this.logId = logId;
	}

	public LocalDateTime getStartTime() {
		return startTime;
	}

	public void setStartTime(LocalDateTime startTime) {
		this.startTime = startTime;
	}

	public LocalDateTime getEndTime() {
		return endTime;
	}

	public void setEndTime(LocalDateTime endTime) {
		this.endTime = endTime;
	}

	public long getDuration() {
		return duration;
	}

	public void setDuration(long duration) {
		this.duration = duration;
	}

	public String getCurrentState() {
		return currentState;
	}

	public void setCurrentState(String currentState) {
		this.currentState = currentState;
	}

	//toString method
	@Override
	public String toString() {
		return "DeviceStatusLog [logId=" + logId + ", startTime=" + startTime + ", endTime=" + endTime + ", duration="
				+ duration + ", currentState=" + currentState + "]";
	}
	
	// Method to end log and calculate duration
	public void endLog(LocalDateTime endTime) {
	    this.endTime = endTime;
	    if (this.startTime != null && endTime != null) {
	        this.duration = java.time.Duration.between(startTime, endTime).getSeconds();
	    }
	}


	
	
}
