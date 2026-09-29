package view;

import java.time.LocalDate;
import java.util.Scanner;
import controller.HouseController;
import controller.RoomController;
import controller.DeviceController;
import controller.UserController;
import model.House;
import model.Room;
import model.Device;
import model.User;

public class MainMenuView {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // Create controller objects
        HouseController houseController = new HouseController();
        RoomController roomController = new RoomController();
        DeviceController deviceController = new DeviceController();
        UserController userController = new UserController();

        int choice;

        do {
            System.out.println("\n===== 🏠 SMART HOME MAIN MENU =====");
            System.out.println("1. Manage Houses");
            System.out.println("2. Manage Rooms");
            System.out.println("3. Manage Devices");
            System.out.println("4. Manage Users");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    manageHouseMenu(sc, houseController);
                    break;

                case 2:
                    manageRoomMenu(sc, roomController);
                    break;

                case 3:
                    manageDeviceMenu(sc, deviceController);
                    break;

                case 4:
                    manageUserMenu(sc, userController);
                    break;

                case 5:
                    System.out.println("Exiting Smart Home System... 👋");
                    break;

                default:
                    System.out.println("❌ Invalid choice. Try again!");
            }

        } while (choice != 5);

        sc.close();
    }

    // ================================
    // HOUSE MENU
    // ================================
    private static void manageHouseMenu(Scanner sc, HouseController houseController) {
        int ch;
        do {
            System.out.println("\n🏠 House Management Menu");
            System.out.println("1. Add House");
            System.out.println("2. View House");
            System.out.println("3. List All Houses");
            System.out.println("4. Back to Main Menu");
            System.out.print("Enter your choice: ");
            ch = sc.nextInt();

            switch (ch) {
                case 1:
                    System.out.print("Enter House ID: ");
                    int id = sc.nextInt();
                    sc.nextLine();
                    System.out.print("Enter House Name: ");
                    String name = sc.nextLine();
                    System.out.print("Enter Owner Name: ");
                    String owner = sc.nextLine();
                    System.out.print("Enter Location: ");
                    String loc = sc.nextLine();

                    House h = new House(id, name, owner, loc);
                    houseController.addHouse(h);
                    break;

                case 2:
                    System.out.print("Enter House ID to view: ");
                    int hid = sc.nextInt();
                    houseController.viewHouse(hid);
                    break;

                case 3:
                    houseController.listHouses();
                    break;

                case 4:
                    System.out.println("Returning to main menu...");
                    break;

                default:
                    System.out.println("❌ Invalid choice.");
            }
        } while (ch != 4);
    }

    // ================================
    // ROOM MENU
    // ================================
    private static void manageRoomMenu(Scanner sc, RoomController roomController) {
        int ch;
        do {
            System.out.println("\n🛏️ Room Management Menu");
            System.out.println("1. Add Room");
            System.out.println("2. View Room Devices");
            System.out.println("3. Delete Room");
            System.out.println("4. List All Rooms");
            System.out.println("5. Back to Main Menu");
            System.out.print("Enter your choice: ");
            ch = sc.nextInt();
            sc.nextLine();

            switch (ch) {
                case 1:
                    System.out.print("Enter Room ID: ");
                    int id = sc.nextInt();
                    sc.nextLine();
                    System.out.print("Enter Room Name: ");
                    String name = sc.nextLine();
                    System.out.print("Enter Room Type: ");
                    String type = sc.nextLine();

                    Room r = new Room(id, name, type, null);
                    roomController.addRoom(r);
                    break;

                case 2:
                    System.out.print("Enter Room ID to view devices: ");
                    int rid = sc.nextInt();
                    roomController.viewRoomDevices(rid);
                    break;

                case 3:
                    System.out.print("Enter Room ID to delete: ");
                    int delId = sc.nextInt();
                    roomController.deleteRoom(delId);
                    break;

                case 4:
                    roomController.listRooms();
                    break;

                case 5:
                    System.out.println("Returning to main menu...");
                    break;

                default:
                    System.out.println("❌ Invalid choice.");
            }
        } while (ch != 5);
    }

    // ================================
    // DEVICE MENU
    // ================================
    private static void manageDeviceMenu(Scanner sc, DeviceController deviceController) {
        int ch;
        do {
            System.out.println("\n💡 Device Management Menu");
            System.out.println("1. Add Device");
            System.out.println("2. Turn ON Device");
            System.out.println("3. Turn OFF Device");
            System.out.println("4. Check Device Status");
            System.out.println("5. Show Device Log");
            System.out.println("6. List All Devices");
            System.out.println("7. Back to Main Menu");
            System.out.print("Enter your choice: ");
            ch = sc.nextInt();
            sc.nextLine();

            switch (ch) {
                case 1:
                    System.out.print("Enter Device ID: ");
                    int id = sc.nextInt();
                    sc.nextLine();
                    System.out.print("Enter Device Name: ");
                    String name = sc.nextLine();
                    System.out.print("Enter Brand: ");
                    String brand = sc.nextLine();

                    Device d = new Device(id, name, "SmartLight", false, 15.5, LocalDate.now());
                    deviceController.addDevice(d);
                    break;

                case 2:
                    System.out.print("Enter Device ID to turn ON: ");
                    int onId = sc.nextInt();
                    deviceController.turnOnDevice(onId);
                    break;

                case 3:
                    System.out.print("Enter Device ID to turn OFF: ");
                    int offId = sc.nextInt();
                    deviceController.turnOffDevice(offId);
                    break;

                case 4:
                    System.out.print("Enter Device ID to check status: ");
                    int stId = sc.nextInt();
                    deviceController.checkDeviceStatus(stId);
                    break;

                case 5:
                    System.out.print("Enter Device ID to show log: ");
                    int logId = sc.nextInt();
                    deviceController.showDeviceLog(logId);
                    break;

                case 6:
                    deviceController.listDevices();
                    break;

                case 7:
                    System.out.println("Returning to main menu...");
                    break;

                default:
                    System.out.println("❌ Invalid choice.");
            }
        } while (ch != 7);
    }

    // ================================
    // USER MENU
    // ================================
    private static void manageUserMenu(Scanner sc, UserController userController) {
        int ch;
        do {
            System.out.println("\n👤 User Management Menu");
            System.out.println("1. Add User");
            System.out.println("2. Remove User");
            System.out.println("3. List All Users");
            System.out.println("4. Assign Role");
            System.out.println("5. Back to Main Menu");
            System.out.print("Enter your choice: ");
            ch = sc.nextInt();
            sc.nextLine();

            switch (ch) {
                case 1:
                    System.out.print("Enter User ID: ");
                    int id = sc.nextInt();
                    sc.nextLine();
                    System.out.print("Enter User Name: ");
                    String name = sc.nextLine();
                    System.out.print("Enter Contact Info: ");
                    String contact = sc.nextLine();
                    System.out.print("Enter Role: ");
                    String role = sc.nextLine();

                    User u = new User(id, name, contact, role);
                    userController.addUser(u);
                    break;

                case 2:
                    System.out.print("Enter User ID to remove: ");
                    int delId = sc.nextInt();
                    userController.removeUser(delId);
                    break;

                case 3:
                    userController.listUsers();
                    break;

                case 4:
                    System.out.print("Enter User ID to assign role: ");
                    int uid = sc.nextInt();
                    sc.nextLine();
                    System.out.print("Enter new Role: ");
                    String newRole = sc.nextLine();
                    userController.assignRole(uid, newRole);
                    break;

                case 5:
                    System.out.println("Returning to main menu...");
                    break;

                default:
                    System.out.println("❌ Invalid choice.");
            }
        } while (ch != 5);
    }
}
