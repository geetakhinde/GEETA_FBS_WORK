package controller;

import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.List;
import model.Device;
import model.DeviceStatusLog;

public class DeviceController {

    // List to store all devices
    private List<Device> deviceList = new ArrayList<>();
    private int logCounter = 1;  // to give unique log IDs
    private LocalDateTime endTime;

    // Method to add a new device
    public void addDevice(Device device) {
        deviceList.add(device);
        System.out.println(" Device added successfully: " + device.getDeviceName());
    }

    // Method to turn ON a device
    public void turnOnDevice(int deviceId) {
        for (Device d : deviceList) {
            if (d.getDeviceId() == deviceId) {
                d.setCurrentState("ON");

                // Create log entry when turned ON
                DeviceStatusLog log = new DeviceStatusLog();
                log.setLogId(logCounter++);
                log.setStartTime(LocalDateTime.now());
                log.setCurrentState("ON");
                d.addStatusLog(log);

                System.out.println( d.getDeviceName() + " turned ON at " + log.getStartTime());
                return;
            }
        }
        System.out.println("Device not found with ID: " + deviceId);
    }


    // Method to turn OFF a device
    public void turnOffDevice(int deviceId) {
        for (Device d : deviceList) {
            if (d.getDeviceId() == deviceId) {
                d.setCurrentState("OFF");

                // Find last log and update OFF time
                List<DeviceStatusLog> logs = d.getStatusLogs();
                if (!logs.isEmpty()) {
                    DeviceStatusLog lastLog = logs.get(logs.size() - 1);
                    if (lastLog.getEndTime() == null) {
                        lastLog.endLog(LocalDateTime.now());
                        lastLog.setCurrentState("OFF");
                        System.out.println( d.getDeviceName() + " turned OFF at " + lastLog.getEndTime());
                        System.out.println("Duration ON: " + lastLog.getDuration() + " seconds");
                    }
                }
                return;
            }
        }
        System.out.println("Device not found with ID: " + deviceId);
    }


    // Method to check the status of a device
    public void checkDeviceStatus(int deviceId) {
        for (Device d : deviceList) {
            if (d.getDeviceId() == deviceId) {
                System.out.println("Device: " + d.getDeviceName() + " | Status: " + d.getCurrentState());
                return;
            }
        }
        System.out.println("Device not found with ID: " + deviceId);
    }

    
 // Method to show device log 
    public void showDeviceLog(int deviceId) {
        for (Device d : deviceList) {
            if (d.getDeviceId() == deviceId) {
                List<DeviceStatusLog> logs = d.getStatusLogs();
                if (logs == null || logs.isEmpty()) {
                    System.out.println("No logs found for device: " + d.getDeviceName());
                    return;
                }

                System.out.println("Logs for device: " + d.getDeviceName());
                System.out.println("--------------------------------------------");

                // Import this at the top: import java.time.format.DateTimeFormatter;
                java.time.format.DateTimeFormatter formatter = java.time.format.DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss");

                for (DeviceStatusLog log : logs) {
                    String start = (log.getStartTime() != null) ? log.getStartTime().format(formatter) : "N/A";
                    String end = (log.getEndTime() != null) ? log.getEndTime().format(formatter) : "N/A";

                    System.out.println("Log ID: " + log.getLogId());
                    System.out.println("Start Time: " + start);
                    System.out.println("End Time: " + end);
                    System.out.println("Duration: " + log.getDuration() + " seconds");
                    System.out.println("Current State: " + log.getCurrentState());
                    System.out.println("--------------------------------------------");
                }
                return;
            }
        }
        System.out.println("Device not found with ID: " + deviceId);
    }


    // Method to list all devices (for testing)
    public void listDevices() {
        if (deviceList.isEmpty()) {
            System.out.println("No devices available.");
            return;
        }
        System.out.println("List of Devices:");
        for (Device d : deviceList) {
            System.out.println(d);
        }
    }

    // Getter for device list
    public List<Device> getDeviceList() {
        return deviceList;
    }
    
 

}
