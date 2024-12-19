package my_code.A1;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.*;

public class test {
    public static void main(String[] args) {
        test c = new test();
        c.init(); // 初始化计算器界面
        // System.out.println(16 * 0.2); // 调试用的输出代码
    }

    // 定义主窗口和菜单栏
    JFrame frame = new JFrame("Calculator");
    JMenuBar menuBar = new JMenuBar();

    // 定义菜单及菜单项
    JMenu edit = new JMenu("edit"); // 编辑菜单
    JMenuItem save = new JMenuItem("save"); // 保存文件菜单项
    JMenu check = new JMenu("check"); // 查看菜单
    JMenuItem message = new JMenuItem("about me"); // 关于菜单项
    JMenuItem help = new JMenuItem("help"); // 帮助菜单项

    // 按钮标签数组
    String[] s = new String[]{"M-", "", "", "Backspace", "CE", "C", "MC", "7", "8", "9", "/", "sqrt",
            "MR", "4", "5", "6", "*", "%", "MS", "1", "2", "3", "-", "1/x", "M+", "0", "+/-", ".", "+", "="};

    // 定义文本框和计算过程中的变量
    JTextField textField = new JTextField(100); // 用于显示计算结果和输入的文本框
    String currentInput = ""; // 当前输入的数字或操作符
    int pos = 0; // 标记运算符位置 (1:+, 2:-, 3:*, 4:/)
    double result1 = 0, result2 = 0; // 用于保存运算中的中间结果
    double result = 0; // 最终结果

    // 添加菜单功能
    public void addMenu() {
        // 将菜单项添加到菜单
        edit.add(save);
        check.add(message);
        menuBar.add(edit);
        menuBar.add(check);
        menuBar.add(help);
        frame.setJMenuBar(menuBar); // 将菜单栏设置到窗口

        // 保存文件功能
        save.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                JFileChooser fileChooser = new JFileChooser(); // 创建文件选择器
                fileChooser.setDialogTitle("\n" + "Select the path to save the file");
                int userSelection = fileChooser.showSaveDialog(null); // 显示保存对话框
                if (userSelection == JFileChooser.APPROVE_OPTION) {
                    File fileToSave = fileChooser.getSelectedFile(); // 获取选择的文件
                    String content = currentInput; // 获取当前输入的内容
                    try (BufferedWriter writer = new BufferedWriter(new FileWriter(fileToSave))) {
                        writer.write(content); // 将内容写入文件
                        System.out.println("\n" + "File saved successfully: " + fileToSave.getAbsolutePath());
                    } catch (IOException ac) {
                        ac.printStackTrace();
                        System.out.println("\n" + "File save failed");
                    }
                }
            }
        });

        // 关于信息功能
        message.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                JDialog dialog = new JDialog();
                dialog.add(new JTextArea("Make in : 23034225wuqili\nMake Data : 2024/12/9"));
                dialog.setBounds(300, 300, 300, 100);
                dialog.setVisible(true);
            }
        });

        // 帮助信息功能
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

    // 添加按钮到界面
    public void addButton() {
        JPanel panel = new JPanel(); // 创建一个面板
        panel.setLayout(new GridLayout(5, 6)); // 设置网格布局 5 行 6 列
        for (String i : s) {
            final String value = i;
            JButton button = new JButton(value); // 创建按钮
            button.addActionListener(new ActionListener() {
                @Override
                public void actionPerformed(ActionEvent e) {
                    buttonpress(value); // 按钮点击触发事件
                }
            });
            panel.add(button); // 将按钮添加到面板
        }
        frame.add(panel); // 将面板添加到窗口
    }

    // 按钮按下后的逻辑处理
    public void buttonpress(String str) {
        switch (str) {
            case "=" :
                // 根据运算符位置计算结果
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
                // 清空所有输入和结果
                currentInput = "";
                result1 = 0;
                result2 = 0;
                break;
            case "CE" :
                // 清空当前输入
                currentInput = "";
                break;
            case "Backspace" :
                // 删除当前输入的最后一个字符
                if (currentInput.length() > 0) {
                    currentInput = currentInput.substring(0, currentInput.length() - 1);
                }
                break;
            case "+/-" :
                // 取反
                if (currentInput.startsWith("-")) {
                    currentInput = currentInput.substring(1);
                } else {
                    currentInput = "-" + currentInput;
                }
                break;
            case "sqrt" :
                // 计算平方根
                try {
                    double value = Double.parseDouble(currentInput);
                    currentInput = String.valueOf(Math.sqrt(value));
                } catch (NumberFormatException e) {
                    currentInput = "Error";
                }
                break;
            case "1/x" :
                // 计算倒数
                try {
                    double value = Double.parseDouble(currentInput);
                    currentInput = String.valueOf(1 / value);
                } catch (NumberFormatException e) {
                    currentInput = "Error";
                }
                break;
            case "%" :
                // 计算百分比
                try {
                    double value = Double.parseDouble(currentInput);
                    currentInput = String.valueOf(value / 100);
                } catch (NumberFormatException e) {
                    currentInput = "Error";
                }
                break;
            case "M+" :
                // 将当前输入值加到存储器
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
                // 将当前输入值从存储器中减去
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
                // 读取存储器的值
                currentInput = String.valueOf(result1);
                break;
            case "MS" :
                // 将当前输入值存储到存储器中
                result1 = Double.parseDouble(currentInput);
                break;
            case "MC" :
                // 清空存储器
                result1 = 0;
                break;
            case "+" :
                // 加法操作，记录第一个操作数并设置运算符位置
                result1 = Double.parseDouble(currentInput);
                currentInput = "";
                pos = 1;
                break;
            case "-" :
                // 减法操作，记录第一个操作数并设置运算符位置
                result1 = Double.parseDouble(currentInput);
                currentInput = "";
                pos = 2;
                break;
            case "*" :
                // 乘法操作，记录第一个操作数并设置运算符位置
                result1 = Double.parseDouble(currentInput);
                currentInput = "";
                pos = 3;
                break;
            case "/" :
                // 除法操作，记录第一个操作数并设置运算符位置
                result1 = Double.parseDouble(currentInput);
                currentInput = "";
                pos = 4;
                break;
            default:
                // 默认处理数字和小数点的输入
                if ("1234567890.".contains(str)) {
                    currentInput += str;
                }
        }
        textField.setText(currentInput); // 更新文本框显示内容
    }

    public void init() {
        addMenu(); // 初始化菜单
        frame.add(textField, BorderLayout.NORTH); // 将文本框添加到窗口顶部
        addButton(); // 初始化按钮
        frame.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE); // 设置关闭窗口时的默认操作
        frame.setBounds(300, 300, 600, 400); // 设置窗口位置和大小
        frame.setVisible(true); // 显示窗口
    }
}
