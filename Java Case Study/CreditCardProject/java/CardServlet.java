package p1;

import java.io.IOException;
import java.io.PrintWriter;

import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

@WebServlet("/authenticate")
public class CardServlet extends HttpServlet {

    public void service(HttpServletRequest req, HttpServletResponse res) throws IOException {

        System.out.println("inside the game bro");

        String CardName = req.getParameter("cardname");
        String CardNumber = req.getParameter("cardnumber");
        String CardExpiry = req.getParameter("expirydate");
        String CVV = req.getParameter("cardcvv");  // FIXED

        VerifyCard ref = new VerifyCard();
        boolean result = ref.isValid(CardName, CardNumber, CardExpiry, CVV); // FIXED

        res.setContentType("text/html"); // FIXED
        PrintWriter out = res.getWriter();

        if (result == true) {
            out.println("Valid user");
        } else {
            out.println("Invalid user");
        }
    }
}
