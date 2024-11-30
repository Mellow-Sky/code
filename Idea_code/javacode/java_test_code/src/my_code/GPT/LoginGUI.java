package my_code.GPT;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class LoginGUI implements ActionListener {

    private JFrame frame;
    private JTextField usernameField;
    private JPasswordField passwordField;
    private JButton loginButton;

    public LoginGUI() {
        frame = new JFrame("Login");

        // Create UI components
        JLabel usernameLabel = new JLabel("Username:");
        usernameField = new JTextField(20);
        JLabel passwordLabel = new JLabel("Password:");
        passwordField = new JPasswordField(20);
        loginButton = new JButton("Login");

        // Set up layout
        frame.setLayout(new GridLayout(3, 2));
        frame.add(usernameLabel);
        frame.add(usernameField);
        frame.add(passwordLabel);
        frame.add(passwordField);
        frame.add(new JLabel()); // Empty cell
        frame.add(loginButton);

        loginButton.addActionListener(this);

        // Frame settings
        frame.setSize(300, 150);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String username = usernameField.getText();
        String password = new String(passwordField.getPassword());

        // Example check for login credentials, can be replaced with real validation
        if ("root".equals(username) && "1377639773".equals(password)) {
            JOptionPane.showMessageDialog(frame, "Login successful!");
            frame.dispose(); // Close the login frame
            new MainGUI(); // Open main GUI after successful login
        } else {
            JOptionPane.showMessageDialog(frame, "Invalid credentials", "Login Failed", JOptionPane.ERROR_MESSAGE);
        }
    }

    public static void main(String[] args) {
        new LoginGUI();
    }
}
