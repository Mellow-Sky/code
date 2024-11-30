package my_code.m241128;

import java.sql.*;

public class DBconnect {
    Connection connection;
    String user = "root";
    String url = "jdbc:mysql://localhost:3306/test";
    String pwd = "1377639773";


    public DBconnect() throws SQLException {
        connection = DriverManager.getConnection(url, user, pwd);
    }

    public boolean check(String user, String pwd) {
        if (this.user.equals(user) && this.pwd.equals(pwd)) {
            return true;
        } else {
            return false;
        }
    }
    public PreparedStatement preparedStatement(String s) throws SQLException {
        return connection.prepareStatement(s);
    }
    public ResultSet run(String s) throws SQLException{
        return connection.createStatement().executeQuery(s);
    }

    public void disconnection() throws SQLException{
        connection.close();
    }
}