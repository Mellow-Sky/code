package my_code.m241128;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.SQLException;

public class UserLoginGUI {
    JFrame frame = new JFrame("Login screen");
    JLabel label1 = new JLabel("Username");
    JLabel label2 = new JLabel("password");
    JTextField textField1 = new JTextField(10);
    JPasswordField textField2 = new JPasswordField(10);
    JButton button1 = new JButton("login");
    JButton button2 = new JButton("cancel");

    public UserLoginGUI() throws SQLException {

        JPanel panel1 = new JPanel();
        panel1.setLayout(new GridLayout(2, 2));
        panel1.add(label1);
        panel1.add(textField1);
        panel1.add(label2);
        panel1.add(textField2);
        frame.add(panel1);
        JPanel panel2 = new JPanel(new FlowLayout());
        panel2.add(button1);
        panel2.add(button2);
        frame.add(panel2, BorderLayout.SOUTH);

        button1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                DBconnect DB = null;
                try {
                    DB = new DBconnect();
                } catch (SQLException ex) {
                    throw new RuntimeException(ex);
                }
                String username = textField1.getText();
                String pwd = textField2.getText();
                boolean b = DB.check(username, pwd);
                if (b) {
                    frame.setVisible(false);
                    try {
                        DB.disconnection();
                        MainGUI main = new MainGUI();
                    } catch (SQLException ex) {
                        throw new RuntimeException(ex);
                    }

                } else {
                    JOptionPane.showConfirmDialog(null, "noooooo");
                }
            }
        });
        button2.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.exit(0);
            }
        });
        frame.setSize(270, 150);
        frame.setVisible(true);
    }

    public static void main(String[] args) throws SQLException{
        UserLoginGUI userLoginGUI = new UserLoginGUI();

    }
}
