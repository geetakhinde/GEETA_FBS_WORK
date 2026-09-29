package com.quiz.main;

import com.quiz.dao.CategoryDAO;
import com.quiz.dao.DifficultyDAO;
import com.quiz.model.Category;
import com.quiz.model.Difficulty;

public class TestCategoryDifficulty {
	
	public static void main(String[] args) {
		
		CategoryDAO cdao = new CategoryDAO();
		DifficultyDAO ddao = new DifficultyDAO();
		
		System.out.println("Categories:");
		for(Category c : cdao.getAllCategories()) {
			System.out.println(c.getCategoryId() + " - " + c.getCategoryName());
		}
		
		System.out.println("\ndifficulty Levels: ");
		for(Difficulty d : ddao.getAllLevels()) {
			System.out.println(d.getLevelId() + " - " + d.getLevelName());
		}
	}

}
