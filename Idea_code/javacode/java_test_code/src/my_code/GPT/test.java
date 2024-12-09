package my_code.GPT;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class test {
    JFrame frame = new JFrame("Calculator");
    JMenuBar menuBar = new JMenuBar();
    JMenu edit = new JMenu("Edit"); // 编辑
    JMenuItem save = new JMenuItem("Save"); // 保存文件
    JMenu check = new JMenu("Check"); // 查看
    JMenuItem message = new JMenuItem("About me");
    JMenu help = new JMenu("Help"); // 帮助
    String[] s = new String[]{"", "", "", "Backspace", "CE", "C", "MC", "7", "8", "9", "/", "sqrt",
            "MR", "4", "5", "6", "*", "%", "MS", "1", "2", "3", "-", "1/x", "M+", "0", "+/-", ".", "+", "="};
    JTextField textField = new JTextField(100);
    String currentInput = "";  // 当前输入
    double result = 0;  // 运算结果
    String lastOperator = "=";  // 上一个运算符
    boolean isOperatorPressed = false;  // 判断是否已经按下运算符

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
        for (String label : s) {
            Button button = new Button(label);
            button.addActionListener(new ActionListener() {
                @Override
                public void actionPerformed(ActionEvent e) {
                    handleButtonPress(label);
                }
            });
            panel.add(button);
        }
        frame.add(panel);
    }

    public void handleButtonPress(String label) {
        switch (label) {
            case "=":
                calculate();
                break;
            case "C":
                currentInput = "";
                result = 0;
                lastOperator = "=";
                isOperatorPressed = false;
                break;
            case "CE":
                currentInput = "";
                break;
            case "Backspace":
                if (currentInput.length() > 0) {
                    currentInput = currentInput.substring(0, currentInput.length() - 1);
                }
                break;
            case "+/-":
                if (currentInput.startsWith("-")) {
                    currentInput = currentInput.substring(1);
                } else {
                    currentInput = "-" + currentInput;
                }
                break;
            case "sqrt":
                try {
                    double value = Double.parseDouble(currentInput);
                    currentInput = String.valueOf(Math.sqrt(value));
                } catch (NumberFormatException e) {
                    currentInput = "Error";
                }
                break;
            case "1/x":
                try {
                    double value = Double.parseDouble(currentInput);
                    currentInput = String.valueOf(1 / value);
                } catch (NumberFormatException e) {
                    currentInput = "Error";
                }
                break;
            case "%":
                try {
                    double value = Double.parseDouble(currentInput);
                    currentInput = String.valueOf(value / 100);
                } catch (NumberFormatException e) {
                    currentInput = "Error";
                }
                break;
            case "M+":
                // Implement memory add functionality
                break;
            case "MR":
                // Implement memory recall functionality
                break;
            case "MS":
                // Implement memory store functionality
                break;
            case "MC":
                // Implement memory clear functionality
                break;
            default:
                // 数字和小数点按钮
                if ("0123456789.".contains(label)) {
                    if (isOperatorPressed) {
                        currentInput = label;
                        isOperatorPressed = false;
                    } else {
                        currentInput += label;
                    }
                } else {
                    // 操作符按钮
                    performOperation(label);
                }
                break;
        }
        textField.setText(currentInput);
    }

    public void performOperation(String operator) {
        try {
            double input = Double.parseDouble(currentInput);

            // 执行上一个运算
            switch (lastOperator) {
                case "=":
                    result = input;
                    break;
                case "+":
                    result += input;
                    break;
                case "-":
                    result -= input;
                    break;
                case "*":
                    result *= input;
                    break;
                case "/":
                    if (input != 0) {
                        result /= input;
                    } else {
                        currentInput = "Error";
                        textField.setText(currentInput);
                        return;
                    }
                    break;
            }

            currentInput = "";  // 清空当前输入
            lastOperator = operator;  // 更新当前运算符
            isOperatorPressed = true;  // 标记已按下运算符

            // 更新显示
            if (lastOperator.equals("=")) {
                textField.setText(String.valueOf(result));
            } else {
                textField.setText(String.valueOf(result) + " " + operator);
            }
        } catch (NumberFormatException e) {
            currentInput = "Error";
            textField.setText(currentInput);
        }
    }

    public void calculate() {
        try {
            double input = Double.parseDouble(currentInput);
            performOperation(lastOperator);
            //result = input;
            lastOperator = "=";
            textField.setText(String.valueOf(result));
        } catch (NumberFormatException e) {
            currentInput = "Error";
            textField.setText(currentInput);
        }
    }

    public void init() {
        addMenu();
        frame.add(textField, BorderLayout.NORTH);
        addButton();
        frame.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        frame.setBounds(300, 300, 600, 400);
        frame.setVisible(true);
    }

    public static void main(String[] args) {
        test menu = new test();
        menu.init();
    }
}
