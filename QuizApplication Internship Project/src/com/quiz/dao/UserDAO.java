package com.quiz.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

import com.quiz.model.User;
import com.quiz.util.DBConnection;

public class UserDAO {
	
	public boolean registerUser(User user) {
	    boolean status = false;
	    try {
	        Connection con = DBConnection.getConnection();
	        String sql = "INSERT INTO users(username,password) VALUES(?,?)";

	        PreparedStatement ps = con.prepareStatement(sql);
	        ps.setString(1, user.getUsername());
	        ps.setString(2, user.getPassword());

	        int rows = ps.executeUpdate(); // returns int

	        if (rows > 0) {
	            status = true;
	        }

	    } catch (java.sql.SQLIntegrityConstraintViolationException e) {
	        System.out.println("Username already exists!");
	    } catch (Exception e) {
	        e.printStackTrace();
	    }
	    return status;
	}

	public User loginUSer(String username, String password) {
		User user = null;
		try {
			Connection con = DBConnection.getConnection();
			String query = "SELECT * FROM users WHERE username=? AND password=?";
			
			PreparedStatement ps = con.prepareStatement(query);
			ps.setString(1, username);
			ps.setString(2, password);
			
			ResultSet rs = ps.executeQuery();
			if(rs.next()) {
				user = new User();
				user.setUserId(rs.getInt("user_id"));
				user.setUsername(rs.getString("username"));
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		return user;
	}
}
