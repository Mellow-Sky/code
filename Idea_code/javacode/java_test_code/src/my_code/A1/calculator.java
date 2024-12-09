//package my_code.A1;
//
//import javax.swing.*;
//import java.awt.*;
//import java.awt.event.ActionEvent;
//import java.awt.event.ActionListener;
//
//public class calculator {
//
//    public static void main(String[] args) {
//        calculator cal = new calculator();
//        cal.init();
//    }
//
//    JFrame frame = new JFrame("Calculator");
//    JMenuBar menuBar = new JMenuBar();
//    JMenu edit = new JMenu("edit"); // 编辑
//    JMenuItem save = new JMenuItem("save"); // 保存文件
//    JMenu check = new JMenu("check"); // 查看
//    JMenuItem message = new JMenuItem("about me");
//    JMenu help = new JMenu("help"); // 帮助
//    String[] s = new String[]{
//            "", "", "", "Backspace", "CE", "C",
//            "MC", "7", "8",   "9", "/", "sqrt",
//            "MR", "4", "5",   "6", "*", "%",
//            "MS", "1", "2",   "3", "-", "1/x",
//            "M+", "0", "+/-", ".", "+", "="
//    };
//
//    JTextField textField = new JTextField(100);
//    String currentInput = "";  // 当前输入
//    double result1 = 0, result2 = 0;  // 运算结果
//    //String lastOperator = "=";  // 上一个运算符
//    boolean isOperatorPressed = false;  // 判断是否已经按下运算符
//    int temp = 0;
//    public void addMenu() {
//        // 添加菜单
//        edit.add(save);
//        check.add(message);
//        menuBar.add(edit);
//        menuBar.add(check);
//        menuBar.add(help);
//        frame.setJMenuBar(menuBar);
//    }
//    public void addButton() {
//        // 添加按钮
//        JPanel panel = new JPanel();
//        panel.setLayout(new GridLayout(5, 6));
//        for (String i : s) {
//            final String value = i;
//            Button button = new Button(value);
//            button.addActionListener(new ActionListener() {
//                @Override
//                public void actionPerformed(ActionEvent e) {
//                    ButtonPress(value);
//                }
//            });
//            panel.add(button);
//        }
//        frame.add(panel);
//    }
//
//    public void ButtonPress(String str) {
//        c
//
////    public void performOperation(String str) {
////        try {
////            double input = Double.parseDouble(currentInput);
////
////            switch (lastOperator) {
////                case "+" :
////                    result += input;
////                    break;
////                case "-" :
////                    result -= input;
////                    break;
////                case "*" :
////                    result *= input;
////                    break;
////                case "/" :
////                    if (input == 0) {
////                        currentInput = "error";
////                        textField.setText(currentInput);
////                        return;
////                    } else {
////                        result /= input;
////                    }
////                    break;
////                case "=" :
////                    result = input;
////                    break;
////            }
////            currentInput = "";
////            lastOperator = str;
////            isOperatorPressed = true;
////
////            if (lastOperator.equals("=")) {
////                textField.setText(String.valueOf(result));
////            } else {
////                textField.setText(String.valueOf(result) + " " + str);
////            }
////        } catch (Exception e) {
////            currentInput = "error";
////            textField.setText(currentInput);
////        }
////    }
////
////    public void calculate() {
////        try {
////            double input = Double.parseDouble(currentInput);
////            performOperation(lastOperator);
////            //result = input;
////            lastOperator = "=";
////            textField.setText(String.valueOf(result));
////        } catch (Exception e) {
////            currentInput = "error";
////            textField.setText(currentInput);
////        }
////    }
//
//    public void init() {
//        addMenu();
//        frame.add(textField, BorderLayout.NORTH);
//        addButton();
//        frame.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
//        frame.setBounds(300, 300, 600, 400);
//        frame.setVisible(true);
//    }
//}