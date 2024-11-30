package my_code.m241128;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class SelectGUI {
    private static final DBconnect DB;
    static {
        try {
            DB = new DBconnect();  // 假设 DBconnect 是正确实现的数据库连接类
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }

    JFrame frame = new JFrame();
    JLabel nameLabel = new JLabel("Name");
    JTextField textField1 = new JTextField(10);
    JLabel idLabel = new JLabel("ID");
    JTextField textField2 = new JTextField(10);
    JTextArea textArea = new JTextArea("ID\tAge\tName\tScore\n");

    JButton selectButton = new JButton("Select");
    JButton cancelButton = new JButton("Cancel");

    public SelectGUI() {
        // 设置界面布局
        JPanel panel = new JPanel(new GridLayout(2, 2));
        panel.add(nameLabel);
        panel.add(textField1);
        panel.add(idLabel);
        panel.add(textField2);
        frame.add(panel, BorderLayout.NORTH);
        frame.add(new JScrollPane(textArea));  // 加入滚动条
        JPanel panel2 = new JPanel(new FlowLayout());
        panel2.add(selectButton);
        panel2.add(cancelButton);
        frame.add(panel2, BorderLayout.SOUTH);

        // 查询按钮点击事件
        selectButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String name = textField1.getText();
                String id = textField2.getText();

                // 查询指定名字的 SQL 语句
                String query = "SELECT * FROM user WHERE name = ?";
                String queryID = "SELECT * FROM user WHERE id = ?";
                if (name.isEmpty() || id.isEmpty()) {
                    textArea.append("cannot be empty!\n");
                    return;
                }

                try {
                    PreparedStatement pstmt = DB.preparedStatement(query);
                    PreparedStatement pstmt2 = DB.preparedStatement(queryID);
                    pstmt.setString(1, name);
                    pstmt2.setString(1, id);
                    ResultSet resultSet = pstmt.executeQuery();
                    ResultSet resultSet2 = pstmt2.executeQuery();
                    if (resultSet.next() && resultSet2.next() && resultSet2.getString("name").equals(name)) {
                        // 如果名字存在，显示结果
                        textArea.append(resultSet.getString("id") + "\t" +
                                resultSet.getString("age") + "\t" +
                                resultSet.getString("name") + "\t" +
                                resultSet.getString("score") + '\n');
                    } else {
                        // 如果名字不存在
                        textArea.append("Not found :" + name + " or " + id + "\n");
                    }

                } catch (SQLException ex) {
                    ex.printStackTrace();
                    textArea.append("error: " + ex.getMessage() + "\n");
                }
            }
        });
        cancelButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textArea.setText("ID\tAge\tName\tScore\n");
            }
        });
        frame.setSize(400, 250);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

}
