package p1;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class DatabaseConnectivity implements CardConnectivity {

    @Override
    public boolean isValid(String cardname, String cardnumber, String expirydate, String cardcvv) {

        try {
            Class.forName("com.mysql.cj.jdbc.Driver");

            Connection con = DriverManager.getConnection(
                    "jdbc:mysql://localhost:3306/bankdb", "root", "geeta2005");

            // Split expiry date MM/YY
            String[] arr = expirydate.split("/");
            String month = arr[0];
            String year = arr[1];

            // SQL query
            String query = "SELECT * FROM creditTable WHERE card_number=? AND holder_name=? "
                    + "AND exp_month=? AND exp_year=? AND cvv=?";

            PreparedStatement pstmt = con.prepareStatement(query);
            pstmt.setString(1, cardnumber);   // card number
            pstmt.setString(2, cardname);     // holder name
            pstmt.setString(3, month);        // exp month
            pstmt.setString(4, year);         // exp year
            pstmt.setString(5, cardcvv);      // cvv

            ResultSet rs = pstmt.executeQuery();

            return rs.next();

        } catch (Exception e) {
            e.printStackTrace();
        }

        return false;
    }
}
