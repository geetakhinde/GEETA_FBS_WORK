package com.quiz.controller;

import com.quiz.dao.UserDAO;
import com.quiz.model.User;

public class UserController {
	
	UserDAO userDAO = new UserDAO();
	
	public boolean register(String username, String password) {
		User user = new User(username, password);
		return userDAO.registerUser(user);
	}
	
	public User login(String username, String password) {
		return userDAO.loginUSer(username, password);
	}

}
