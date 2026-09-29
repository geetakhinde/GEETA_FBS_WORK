package com.quiz.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;
import java.util.List;

import com.quiz.model.Difficulty;
import com.quiz.util.DBConnection;

public class DifficultyDAO {
	
	public List<Difficulty> getAllLevels() {
		List<Difficulty> list = new ArrayList<>();
		try {
			Connection  con = DBConnection.getConnection();
			String query = "SELECT * FROM difficulty_levels";
			
			PreparedStatement ps = con.prepareStatement(query);
			ResultSet rs = ps.executeQuery();
			
			while(rs.next()) {
				Difficulty d = new Difficulty();
				d.setLevelId(rs.getInt("level_id"));
				d.setLevelName(rs.getString("level_name"));
				list.add(d);
			}
		} catch (Exception e) {
			e.printStackTrace();
		} 
		
		return list;
	}

}
