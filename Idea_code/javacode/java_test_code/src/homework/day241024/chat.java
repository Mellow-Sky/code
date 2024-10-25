package homework.day241024;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class chat {
    JFrame frame = new JFrame("聊天");
    String username = new String();

    JPanel panel1 = new JPanel();
    JTextField chatText = new JTextField("");

    JPanel panel2 = new JPanel();
    JComboBox combobox = new JComboBox();
    JButton ok = new JButton("发送");

    JTextArea chatHistory = new JTextArea(10, 15);

    public void init() {
        panel2.setLayout(new FlowLayout());
        combobox.addItem("张三");
        panel2.add(combobox);
        panel2.add(ok);
        panel1.setLayout(new GridLayout(2, 1));
        panel1.add(chatText);
        panel1.add(panel2);
        frame.add(panel1, BorderLayout.SOUTH);
        frame.add(new JScrollPane(chatHistory));

        ok.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String s = chatText.getText();
                if (!s.equals("")) {
                    chatHistory.append(username + ":\n" + s + "\n");
                }
                chatText.setText("");
            }
        });

        frame.setBounds(400, 300, 250, 300);
        frame.setVisible(true);
    }
    public void setUsername(String s) {
        username = s;
    }
}
