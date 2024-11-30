package my_code.m241121;

import java.sql.*;

public class DatabaseManager2 {
    private Connection connection;

    public DatabaseManager2() throws SQLException {
        String url = "jdbc:mysql://localhost:3306/test"; // 数据库名为test
        String username = "root"; // 假设用户名为 root
        String password = "1377639773"; // 假设密码为 root

        //加载MySQL JDBC驱动程序
//        try {
//            Class.forName("com.mysql.cj.jdbc.Driver");
//        } catch (ClassNotFoundException e) {
//            e.printStackTrace();
//        }
        //开始连接
        connection = DriverManager.getConnection(url, username, password);
    }

    public void disconnect() throws SQLException {
        connection.close();
    }

    //执行SQL
    public ResultSet executeQuery(String query) throws SQLException {
        Statement statement = connection.createStatement();
        return statement.executeQuery(query);
    }

}

