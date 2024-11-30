package my_code.GPT;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.SQLException;

public class MainGUI implements ActionListener {

    private DBconnect DB; // 不再是静态的
    private JFrame frame;
    private JTextField textField;
    private JMenuBar menuBar;
    private JMenu select;
    private JMenuItem nameItem, ageItem, scoreItem;

    public MainGUI() {
        try {
            // 动态初始化 DBconnect
            DB = new DBconnect();
        } catch (SQLException e) {
            JOptionPane.showMessageDialog(null, "Database connection failed: " + e.getMessage(), "Error", JOptionPane.ERROR_MESSAGE);
            return; // 如果数据库连接失败，返回，避免继续执行后续代码
        }

        // 创建和设置界面
        frame = new JFrame("Main GUI");

        menuBar = new JMenuBar();
        select = new JMenu("Select");
        nameItem = new JMenuItem("Name");
        ageItem = new JMenuItem("Age");
        scoreItem = new JMenuItem("Score");

        textField = new JTextField(20);

        select.add(nameItem);
        select.add(ageItem);
        select.add(scoreItem);
        menuBar.add(select);
        frame.setJMenuBar(menuBar);

        frame.setLayout(new BorderLayout());
        frame.add(textField, BorderLayout.CENTER);

        // 为菜单项添加事件监听
        nameItem.addActionListener(this);
        ageItem.addActionListener(this);
        scoreItem.addActionListener(this);

        frame.setSize(300, 150);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String query = "";
        if (e.getSource() == nameItem) {
            query = "SELECT username FROM user";
        } else if (e.getSource() == ageItem) {
            query = "SELECT age FROM user";
        } else if (e.getSource() == scoreItem) {
            query = "SELECT score FROM user";
        }

        // 运行查询并更新文本框
        try {
            String result = DB.runQuery(query);
            textField.setText(result != null ? result : "No result found");
        } catch (SQLException ex) {
            JOptionPane.showMessageDialog(frame, "Error executing query: " + ex.getMessage(), "Database Error", JOptionPane.ERROR_MESSAGE);
        }
    }
}
