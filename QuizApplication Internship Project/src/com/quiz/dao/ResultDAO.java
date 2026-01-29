package com.quiz.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;

import com.quiz.model.Result;
import com.quiz.util.DBConnection;

public class ResultDAO {

    public void saveResult(Result result) {
        try {
            Connection con = DBConnection.getConnection();
            String query = "INSERT INTO results(user_id, category_id, level_id, score, total_questions) VALUES (?, ?, ?, ?, ?)";

            PreparedStatement ps = con.prepareStatement(query);
            ps.setInt(1, result.getUserId());
            ps.setInt(2, result.getCategoryId());
            ps.setInt(3, result.getLevelId());
            ps.setInt(4, result.getScore());
            ps.setInt(5, result.getTotalQuestions());

            ps.executeUpdate();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
