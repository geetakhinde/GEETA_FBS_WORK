package controller;

import java.util.ArrayList;
import java.util.List;
import model.User;

public class UserController {

    // List to store all users
    private List<User> userList = new ArrayList<>();

    // Method to add a new user
    public void addUser(User user) {
        userList.add(user);
        System.out.println("User added successfully: " + user.getUserName());
    }

    // Method to remove a user by ID
    public void removeUser(int userId) {
        boolean removed = userList.removeIf(u -> u.getUserId() == userId);
        if (removed) {
            System.out.println(" User removed successfully.");
        } else {
            System.out.println(" User not found with ID: " + userId);
        }
    }

    // Method to list all users
    public void listUsers() {
        if (userList.isEmpty()) {
            System.out.println("No users available.");
            return;
        }
        System.out.println("List of Users:");
        for (User u : userList) {
            System.out.println(u);
        }
    }

    // Method to assign a role to a user
    public void assignRole(int userId, String role) {
        for (User u : userList) {
            if (u.getUserId() == userId) {
                u.setRole(role);
                System.out.println("✅ Role '" + role + "' assigned to user: " + u.getUserName());
                return;
            }
        }
        System.out.println("User not found with ID: " + userId);
    }

    // Getter for user list (optional)
    public List<User> getUserList() {
        return userList;
    }
}
