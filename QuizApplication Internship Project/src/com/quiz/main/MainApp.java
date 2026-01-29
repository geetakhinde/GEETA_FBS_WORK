package com.quiz.main;

import java.util.Scanner;

import com.quiz.controller.QuizController;
import com.quiz.controller.UserController;
import com.quiz.dao.CategoryDAO;
import com.quiz.dao.DifficultyDAO;
import com.quiz.model.Category;
import com.quiz.model.Difficulty;
import com.quiz.model.Result;
import com.quiz.model.User;

public class MainApp {

	public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    UserController userController = new UserController();
    QuizController quizController = new QuizController();
    CategoryDAO categoryDAO = new CategoryDAO();
    DifficultyDAO difficultyDAO = new DifficultyDAO();

    User loggedUser = null;

    // 🔁 MAIN MENU LOOP
    while (true) {

        System.out.println("\n1. Register");
        System.out.println("2. Login");
        System.out.println("3. Exit");
        System.out.print("Enter choice: ");

        int choice = sc.nextInt();
        sc.nextLine();

        // 🔹 REGISTER
        if (choice == 1) {

            System.out.print("Enter Username: ");
            String username = sc.nextLine();

            System.out.print("Enter Password: ");
            String password = sc.nextLine();

            boolean registered = userController.register(username, password);

            if (registered) {
                System.out.println("Registration Successful. Please Login.");
            } else {
                System.out.println("Registration Failed! Username already exists.");

                System.out.println("1. Try Again");
                System.out.println("2. Back to Main Menu");
                int opt = sc.nextInt();
                sc.nextLine();

                // both cases → menu again
                continue;
            }
        }

        // 🔹 LOGIN
        else if (choice == 2) {

            System.out.print("Enter Username: ");
            String username = sc.nextLine();

            System.out.print("Enter Password: ");
            String password = sc.nextLine();

            loggedUser = userController.login(username, password);

            if (loggedUser == null) {
                System.out.println("Invalid Credentials!");
                continue;
            }

            System.out.println("\nLogin Successful!");
            break; // ✅ exit menu loop, start quiz
        }

        // 🔹 EXIT
        else if (choice == 3) {
            System.out.println("Thank you for using Quiz Application 👋");
            sc.close();
            return;
        }

        else {
            System.out.println("Invalid choice. Try again.");
        }
    }

    // ================= QUIZ PART =================

    System.out.println("\nSelect Category:");
    for (Category c : categoryDAO.getAllCategories()) {
        System.out.println(c.getCategoryId() + ". " + c.getCategoryName());
    }
    int categoryId = sc.nextInt();

    System.out.println("\nSelect Difficulty:");
    for (Difficulty d : difficultyDAO.getAllLevels()) {
        System.out.println(d.getLevelId() + ". " + d.getLevelName());
    }
    int levelId = sc.nextInt();

    Result result = quizController.startQuiz(
            loggedUser.getUserId(),
            categoryId,
            levelId,
            sc
    );

    System.out.println("\n===== FINAL RESULT =====");
    System.out.println("Score: " + result.getScore());
    System.out.println("Total Questions: " + result.getTotalQuestions());

    double percentage = (result.getScore() * 100.0) / result.getTotalQuestions();
    System.out.println("Percentage: " + percentage + "%");

    sc.close();
}
}
