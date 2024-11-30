package my_code.m241121;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.*;

public class m241121 implements ActionListener {
    public static void main(String[] args) {
        new m241121().init();
    }


    JFrame frame = new JFrame("Query");
    JLabel label1 = new JLabel("Country Name");
    JLabel label2 = new JLabel("Capital City");
    JTextField textField1 = new JTextField();
    JTextField textField2 = new JTextField();
    JButton button1 = new JButton("Query");
    JButton button2 = new JButton("Cancel");
    public void init() {
        JPanel panel1 = new JPanel();
        JPanel panel2 = new JPanel();
        panel1.setLayout(new GridLayout(2, 2));
        panel1.add(label1);
        panel1.add(textField1);
        panel1.add(label2);
        panel1.add(textField2);
        panel2.setLayout(new FlowLayout());
        panel2.add(button1);
        panel2.add(button2);
        frame.add(panel1);
        frame.add(panel2, BorderLayout.SOUTH);
        button1.addActionListener(this);
        frame.pack();
        frame.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getActionCommand().equals("Query")) {
            try {
                DatabaseManager2 dataAccessObject = new DatabaseManager2();
                //SQL查询nation表
                String query;
                if (textField1.getText().equals("")) {
                    query = "SELECT * FROM nation where province = " + textField2.getText();
                } else {
                    query = "SELECT * FROM nation where country = " + textField1.getText();
                }

                //执行SQL
                ResultSet r = dataAccessObject.executeQuery(query);
                ResultSet resultSet = dataAccessObject.executeQuery(query);
                String column1 = resultSet.getString("coutry");
                String column2 = resultSet.getString("province");
                textField1.setText(column1);
                textField2.setText(column2);
            } catch (SQLException ex) {
                throw new RuntimeException(ex);
            }


        }
    }
}
