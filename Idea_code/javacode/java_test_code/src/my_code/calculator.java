package my_code;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.*;

public class calculator {
    public static void main(String[] args) {
        calculator c = new calculator();
        c.init();
        //System.out.println(16 * 0.2);
    }
    JFrame frame = new JFrame("Calculator");
    JMenuBar menuBar = new JMenuBar();
    JMenu edit = new JMenu("edit"); // 编辑
    JMenuItem save = new JMenuItem("save"); // 保存文件
    JMenu check = new JMenu("check"); // 查看
    JMenuItem message = new JMenuItem("about me");
    JMenuItem help = new JMenuItem("help"); // 帮助
    String[] s = new String[]{"M-", "", "", "Backspace", "CE", "C", "MC", "7", "8", "9", "/", "sqrt",
            "MR", "4", "5", "6", "*", "%", "MS", "1", "2", "3", "-", "1/x", "M+", "0", "+/-", ".", "+", "="};
    JTextField textField = new JTextField(100);
    String currentInput = "";
    int pos = 0;
    double result1 = 0, result2 = 0;
    double result = 0;
    public void addMenu() {
        // 添加菜单
        edit.add(save);
        check.add(message);
        menuBar.add(edit);
        menuBar.add(check);
        menuBar.add(help);
        frame.setJMenuBar(menuBar);
        // 动作
        save.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                JFileChooser fileChooser = new JFileChooser();
                fileChooser.setDialogTitle("\n" + "Select the path to save the file");
                int userSelection = fileChooser.showSaveDialog(null);
                if (userSelection == JFileChooser.APPROVE_OPTION) {
                    File fileToSave = fileChooser.getSelectedFile();
                    String content = currentInput;
                    try (BufferedWriter writer = new BufferedWriter(new FileWriter(fileToSave))) {
                        writer.write(content);
                        System.out.println("\n" + "File saved successfully: " + fileToSave.getAbsolutePath());
                    } catch (IOException ac) {
                        ac.printStackTrace();
                        System.out.println("\n" + "File save failed");
                    }
                }
            }
        });
        message.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                JDialog dialog = new JDialog();
                dialog.add(new JTextArea("Make in : 23034225wuqili\nMake Data : 2024/12/9"));
                dialog.setBounds(300, 300, 300, 100);
                dialog.setVisible(true);
            }
        });
        help.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                JDialog dialog = new JDialog();
                dialog.add(new JTextArea("This is a simple calculator program\nmaybe a little buggy"));
                dialog.setBounds(300, 300, 300, 100);
                dialog.setVisible(true);
            }
        });
    }
    public void addButton() {
        // 添加按钮
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(5, 6));
        for (String i : s) {
            final String value = i;
            JButton button = new JButton(value);
            button.addActionListener(new ActionListener() {
                @Override
                public void actionPerformed(ActionEvent e) {
                    buttonpress(value);
                }
            });
            panel.add(button);
        }
        frame.add(panel);
    }
    public void buttonpress(String str) {
        switch (str) {
            case "=" :
                if (pos == 1) {
                    result2 = Double.parseDouble(currentInput);
                    currentInput = String.valueOf(result1 + result2);
                } else if (pos == 2) {
                    result2 = Double.parseDouble(currentInput);
                    currentInput = String.valueOf(result1 - result2);
                } else if (pos == 3) {
                    result2 = Double.parseDouble(currentInput);
                    currentInput = String.valueOf(result1 * result2);
                } else if (pos == 4) {
                    result2 = Double.parseDouble(currentInput);
                    if (result2 == 0) {
                        currentInput = "error : The divisor cannot be zero!!!";
                    } else {
                        currentInput = String.valueOf(result1 / result2);
                    }
                }
                result1 = 0;
                result2 = 0;
                break;
            case "C" :
                currentInput = "";
                result1 = 0;
                result2 = 0;
                break;
            case "CE" :
                currentInput = "";
                break;
            case "Backspace" :
                if (currentInput.length() > 0) {
                    currentInput = currentInput.substring(0, currentInput.length() - 1);
                }
                break;
            case "+/-" :
                if (currentInput.startsWith("-")) {
                    currentInput = currentInput.substring(1);
                } else {
                    currentInput = "-" + currentInput;
                }
                break;
            case "sqrt" :
                try {
                    double value = Double.parseDouble(currentInput);
                    currentInput = String.valueOf(Math.sqrt(value));
                } catch (NumberFormatException e) {
                    currentInput = "Error";
                }
                break;
            case "1/x" :
                try {
                    double value = Double.parseDouble(currentInput);
                    currentInput = String.valueOf(1 / value);
                } catch (NumberFormatException e) {
                    currentInput = "Error";
                }
                break;
            case "%" :
                try {
                    double value = Double.parseDouble(currentInput);
                    currentInput = String.valueOf(value / 100);
                } catch (NumberFormatException e) {
                    currentInput = "Error";
                }
                break;
            case "M+" :
                try {
                    if (!currentInput.equals("")) {
                        result1 += Double.parseDouble(currentInput);
                        currentInput = "";
                    }
                } catch (Exception e) {
                    currentInput = "Error";
                }
                break;
            case "M-" :
                try {
                    if (!currentInput.equals("")) {
                        result1 -= Double.parseDouble(currentInput);
                        currentInput = "";
                    }
                } catch (Exception e) {
                    currentInput = "Error";
                }
                break;
            case "MR" :
                currentInput = String.valueOf(result1);
                break;
            case "MS" :
                result1 = Double.parseDouble(currentInput);
                break;
            case "MC" :
                result1 = 0;
                break;
            case "+" :
                result1 = Double.parseDouble(currentInput);
                currentInput = "";
                pos = 1;
                break;
            case "-" :
                result1 = Double.parseDouble(currentInput);
                currentInput = "";
                pos = 2;
                break;
            case "*" :
                result1 = Double.parseDouble(currentInput);
                currentInput = "";
                pos = 3;
                break;
            case "/" :
                result1 = Double.parseDouble(currentInput);
                currentInput = "";
                pos = 4;
                break;
            default:
                if ("1234567890.".contains(str)) {
                    currentInput += str;
                }

        }
        textField.setText(currentInput);
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
