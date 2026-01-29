package com.quiz.model;

public class Difficulty {
	
	private int levelId;
	private String levelName;
	
	public Difficulty() {
		
	}

	public Difficulty(int levelId, String levelName) {
		super();
		this.levelId = levelId;
		this.levelName = levelName;
	}

	public int getLevelId() {
		return levelId;
	}

	public void setLevelId(int levelId) {
		this.levelId = levelId;
	}

	public String getLevelName() {
		return levelName;
	}

	public void setLevelName(String levelName) {
		this.levelName = levelName;
	}
	
	

}
