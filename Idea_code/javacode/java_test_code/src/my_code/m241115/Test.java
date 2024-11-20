package my_code.m241115;
import java.sql.*;
public class Test {
    public static void main(String[] args) {
        try {
            //使用m241115类
            DatabaseManager dataAccessObject = new DatabaseManager();
            //SQL查询users表
            String query = "SELECT * FROM user";
            String insert = "INSERT INTO user (id,username,age)VALUES (4,'ddd',40.);";
            //执行SQL
            ResultSet r = dataAccessObject.executeQuery(insert);
            ResultSet resultSet = dataAccessObject.executeQuery(query);
            //循环遍历
            while (resultSet.next()) {
                // 根据需要获取数据
                String column1 = resultSet.getString("id");
                String column2 = resultSet.getString("username");
                String column3 = resultSet.getString("age");
                System.out.println(column1 + ", " + column2+","+column3);
            }
        } catch (SQLException e) {
            // 处理异常的代码，例如打印异常信息
            e.printStackTrace();
        }
    }
}
