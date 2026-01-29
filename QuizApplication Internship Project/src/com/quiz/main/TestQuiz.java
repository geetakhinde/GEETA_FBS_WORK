package com.quiz.main;

import java.util.Scanner;

import com.quiz.controller.QuizController;
import com.quiz.model.Result;

public class TestQuiz {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        QuizController quiz = new QuizController();

        // TEMP values (later from login & menu)
        int userId = 1;
        int categoryId = 1;
        int levelId = 1;

        Result result = quiz.startQuiz(userId, categoryId, levelId, sc);

        System.out.println("\n===== QUIZ RESULT =====");
        System.out.println("Score: " + result.getScore());
        System.out.println("Total Questions: " + result.getTotalQuestions());

        double percentage = (result.getScore() * 100.0) / result.getTotalQuestions();
        System.out.println("Percentage: " + percentage + "%");

        sc.close();
    }
}
