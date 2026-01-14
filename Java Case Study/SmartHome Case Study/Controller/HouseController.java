package controller;

import java.util.ArrayList;
import java.util.List;
import model.House;

public class HouseController {

    // List to store all houses
    private List<House> houseList = new ArrayList<>();

    // Method to add a new house
    public void addHouse(House house) {
        houseList.add(house);
        System.out.println("House added successfully: " + house.getHouseName());
    }

    // Method to view a specific house by ID
    public void viewHouse(int houseId) {
        for (House h : houseList) {
            if (h.getHouseId() == houseId) {
                System.out.println("House details: " + h);
                return;
            }
        }
        System.out.println("House not found with ID: " + houseId);
    }

    // Method to list all houses
    public void listHouses() {
        if (houseList.isEmpty()) {
            System.out.println("No houses available.");
            return;
        }

        System.out.println(" List of Houses:");
        for (House h : houseList) {
            System.out.println(h);
        }
    }

    // Getter for house list
    public List<House> getHouseList() {
        return houseList;
    }
}
