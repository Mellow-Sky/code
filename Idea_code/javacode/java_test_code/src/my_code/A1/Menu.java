package my_code.A1;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Menu {
    JFrame frame = new JFrame("Calculator");
    JMenuBar menuBar = new JMenuBar();
    JMenu edit = new JMenu("edit"); // 编辑
    JMenuItem save = new JMenuItem("save"); // 保存文件
    JMenu check = new JMenu("check"); // 查看
    JMenuItem message = new JMenuItem("about me");
    JMenu help = new JMenu("help"); // 帮助
    String[] s = new String[]{"", "", "", "Backspace", "CE", "C", "MC", "7", "8", "9", "/", "sqrt",
            "MR", "4", "5", "6", "*", "%", "MS", "1", "2", "3", "-", "1/x", "M+", "0", "+/-", ".", "+", "="};
    JTextField textField = new JTextField(100);
    public void addMenu() {
        // 添加菜单
        edit.add(save);
        check.add(message);
        menuBar.add(edit);
        menuBar.add(check);
        menuBar.add(help);
        frame.setJMenuBar(menuBar);
    }
    public void addButton() {
        // 添加按钮
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(5, 6));
        for (String i : s) {
            Button button = new Button(i);
            button.addActionListener(new ActionListener() {
                @Override
                public void actionPerformed(ActionEvent e) {

                }
            });
            panel.add(new Button(i));
        }
        frame.add(panel);
    }



    public void init() {
        addMenu();
        frame.add(textField, BorderLayout.NORTH);
        addButton();
        frame.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        frame.setBounds(300, 300, 600, 400);
        frame.setVisible(true);
    }
}
