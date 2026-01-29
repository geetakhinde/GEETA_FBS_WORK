package com.quiz.main;

import java.util.Scanner;

import com.quiz.controller.UserController;
import com.quiz.model.User;

public class TestUser {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		UserController controller = new UserController();
		
		System.out.println("1. Register");
		System.out.println("2. Login");
		int choice = sc.nextInt();
		
		sc.nextLine();
		
		System.out.println("Enter Username: ");
		String username = sc.nextLine();
		
		System.out.println("Enter PAssword: ");
		String password = sc.nextLine();
		
		if(choice == 1) {
			boolean status = controller.register(username, password);
			System.out.println(status ? "Registration Successful" : "Registration Failed");
		} 
		else {
			User user = controller.login(username, password);
			System.out.println(user != null ? "Login Successful" : "Inavalid Credentials");
		}
		sc.close();
	}

}
