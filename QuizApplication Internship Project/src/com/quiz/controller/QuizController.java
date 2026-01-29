package com.quiz.controller;

import java.util.List;
import java.util.Scanner;

import com.quiz.dao.QuestionDAO;
import com.quiz.dao.ResultDAO;
import com.quiz.model.Question;
import com.quiz.model.Result;

public class QuizController {

    QuestionDAO questionDAO = new QuestionDAO();

    public Result startQuiz(int userId, int categoryId, int levelId, Scanner sc) {

        List<Question> questions = questionDAO.getQuestions(categoryId, levelId);

        if (questions == null || questions.isEmpty()) {
            System.out.println("\n⚠ No questions available for this category/level. Returning to main menu.");
            return null;
        }

        int score = 0;
        int attempted = 0;

        // Loop through questions
        for (int i = 0; i < questions.size(); i++) {
            Question q = questions.get(i);

            // ================= Display question in table format =================
            String difficultyEmoji = (levelId == 1) ? "🙂" : (levelId == 2) ? "😎" : "🤯";
            System.out.println("\n───────────────────────────────");
            System.out.printf("%s Question %d of %d %s\n", difficultyEmoji, i + 1, questions.size(), difficultyEmoji);
            System.out.println("───────────────────────────────");
            System.out.println(q.getQuestionText());
            System.out.println("+-------------------------------+");
            System.out.println("| A | " + q.getOptionA());
            System.out.println("| B | " + q.getOptionB());
            System.out.println("| C | " + q.getOptionC());
            System.out.println("| D | " + q.getOptionD());
            System.out.println("+-------------------------------+");

            // ================= Safe answer input =================
            char answer;
            while (true) {
                System.out.print("Your Answer (A/B/C/D): ");
                String input = sc.nextLine().trim().toUpperCase();

                if (input.length() == 1 &&
                    (input.charAt(0) == 'A' || input.charAt(0) == 'B'
                  || input.charAt(0) == 'C' || input.charAt(0) == 'D')) {
                    answer = input.charAt(0);
                    break;
                } else {
                    System.out.println("⚠ Invalid option! Please enter A, B, C, or D.");
                }
            }

            attempted++;

            // ================= Check answer =================
            if (answer == q.getCorrectOption()) {
                System.out.println("✅ Correct Answer!");
                score++;
            } else {
                System.out.println("❌ Wrong Answer!");
                System.out.println("✔ Correct Answer is: " + q.getCorrectOption());
            }

            // ================= Continue / Back menu =================
            int nextChoice;
            while (true) {
                System.out.println("\n1. Continue Quiz");
                System.out.println("2. Back to Main Menu");
                System.out.print("Enter choice: ");
                String input = sc.nextLine().trim();

                try {
                    nextChoice = Integer.parseInt(input);
                    if (nextChoice == 1 || nextChoice == 2) {
                        break;
                    } else {
                        System.out.println("⚠ Invalid option! Enter 1 or 2.");
                    }
                } catch (NumberFormatException e) {
                    System.out.println("⚠ Invalid input! Enter a number.");
                }
            }

            if (nextChoice == 2) {
                break;
            }
        }

        // ================= Save result =================
        Result result = new Result();
        result.setUserId(userId);
        result.setCategoryId(categoryId);
        result.setLevelId(levelId);
        result.setScore(score);
        result.setTotalQuestions(attempted);

        ResultDAO resultDAO = new ResultDAO();
        resultDAO.saveResult(result);

        // ================= Display attractive result table =================
        double percentage = (attempted > 0) ? (score * 100.0 / attempted) : 0;

        System.out.println("\n🎉🎉🎉===== FINAL QUIZ RESULT =====🎉🎉🎉");
        System.out.println("+-------------------+------------+");
        System.out.printf("| %-17s | %-10d |\n", "Score", score);
        System.out.printf("| %-17s | %-10d |\n", "Total Questions", attempted);
        System.out.printf("| %-17s | %-9.2f%% |\n", "Percentage", percentage);
        System.out.println("+-------------------+------------+");

        if (percentage >= 80) {
            System.out.println("🥳 Excellent! You did great!");
        } else if (percentage >= 50) {
            System.out.println("🙂 Good! Keep practicing.");
        } else {
            System.out.println("😐 Better luck next time. Try again!");
        }

        System.out.println("===========================================\n");

        return result;
    }
}
