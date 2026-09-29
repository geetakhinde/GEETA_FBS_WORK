package com.quiz.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;
import java.util.List;

import com.quiz.model.Category;
import com.quiz.util.DBConnection;

public class CategoryDAO {
	
	public List<Category> getAllCategories() {
		List<Category> list = new ArrayList<>();
		try {
			Connection con = DBConnection.getConnection();
			String query = "SELECT * FROM categories";
			
			PreparedStatement ps = con.prepareStatement(query);
			ResultSet rs = ps.executeQuery();
			
			while(rs.next()) {
				Category c = new Category();
				c.setCategoryId(rs.getInt("category_id"));
				c.setCategoryName(rs.getString("category_name"));
				list.add(c);
			}
			
		} catch (Exception e) {
			e.printStackTrace();
		}
		return list;
	}

}
