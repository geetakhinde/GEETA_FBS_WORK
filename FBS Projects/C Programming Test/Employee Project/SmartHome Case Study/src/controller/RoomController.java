package controller;

import java.util.ArrayList;
import java.util.List;
import model.Room;

public class RoomController {

    // List to store all rooms
    private List<Room> roomList = new ArrayList<>();

    // Method to add a new room
    public void addRoom(Room room) {
        roomList.add(room);
        System.out.println(" Room added successfully: " + room.getHouseName());
    }

    // Method to view devices in a specific room
    public void viewRoomDevices(int roomId) {
        for (Room r : roomList) {
            if (r.getRoomId() == roomId) {
                System.out.println("Devices in " + r.getHouseName() + ":");
                if (r.getDeviceList() == null || r.getDeviceList().isEmpty()) {
                    System.out.println("No devices found in this room.");
                } else {
                    r.getDeviceList().forEach(System.out::println);
                }
                return;
            }
        }
        System.out.println("Room not found with ID: " + roomId);
    }

    // Method to delete a room
    public void deleteRoom(int roomId) {
        boolean removed = roomList.removeIf(r -> r.getRoomId() == roomId);
        if (removed) {
            System.out.println("Room deleted successfully.");
        } else {
            System.out.println("Room not found with ID: " + roomId);
        }
    }

    // Method to list all rooms (extra helpful for testing)
    public void listRooms() {
        if (roomList.isEmpty()) {
            System.out.println("No rooms available.");
            return;
        }

        System.out.println("List of Rooms:");
        for (Room r : roomList) {
            System.out.println(r);
        }
    }

    // Getter for room list (optional)
    public List<Room> getRoomList() {
        return roomList;
    }
}
