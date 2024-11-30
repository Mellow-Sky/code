package my_code.GPT;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class DBconnect {

    private Connection connection;

    public DBconnect() throws SQLException {
        try {
            // Replace with your database connection info
            String url = "jdbc:mysql://localhost:3306/test";
            String user = "root";
            String password = "1377639773";

            // Establish the connection
            connection = DriverManager.getConnection(url, user, password);
        } catch (SQLException e) {
            throw new SQLException("Failed to connect to the database", e);
        }
    }

    public String runQuery(String query) throws SQLException {
        try (Statement stmt = connection.createStatement()) {
            ResultSet rs = stmt.executeQuery(query);
            if (rs.next()) {
                return rs.getString(1); // Assuming we are only fetching one column, e.g. "name"
            }
        } catch (SQLException e) {
            throw new SQLException("Query execution failed", e);
        }
        return null;
    }
}

