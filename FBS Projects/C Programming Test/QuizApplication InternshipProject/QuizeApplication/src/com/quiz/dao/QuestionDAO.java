package com.quiz.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;
import java.util.List;

import com.quiz.model.Question;
import com.quiz.util.DBConnection;

public class QuestionDAO {
	
	public List<Question> getQuestions(int categoryId, int levelId) {
		
		List<Question> list = new ArrayList<>();
		
		try {
			Connection con= DBConnection.getConnection();
			String query = "SELECT * FROM questions WHERE category_id=? AND level_id=?";
			
			PreparedStatement ps = con.prepareStatement(query);
			ps.setInt(1, categoryId);
			ps.setInt(2, levelId);
			
			ResultSet rs = ps.executeQuery();
			
			while(rs.next()) {
				Question q = new Question();
				q.setQuestionId(rs.getInt("question_id"));
				q.setQuestionText(rs.getString("question_text"));
				q.setOptionA(rs.getString("option_a"));
				q.setOptionB(rs.getString("option_b"));
				q.setOptionC(rs.getString("option_c"));
				q.setOptionD(rs.getString("option_d"));
				q.setCorrectOption(rs.getString("correct_option").charAt(0));
				list.add(q);
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		return list;
	}

}
