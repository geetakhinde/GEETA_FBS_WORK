package com.quiz.main;

import com.quiz.dao.QuestionDAO;
import com.quiz.model.Question;

public class TestQuestion {

    public static void main(String[] args) {

        QuestionDAO dao = new QuestionDAO();

        for (Question q : dao.getQuestions(1, 1)) {
            System.out.println(q.getQuestionText());
            System.out.println("A. " + q.getOptionA());
            System.out.println("B. " + q.getOptionB());
            System.out.println("C. " + q.getOptionC());
            System.out.println("D. " + q.getOptionD());
            System.out.println();
        }
    }
}
