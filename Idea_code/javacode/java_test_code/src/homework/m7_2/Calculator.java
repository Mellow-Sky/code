package homework.m7_2;
import javax.swing.*;
import java.awt.*;
import java.util.ArrayList;
import java.util.List;
import java.util.Arrays;
public class Calculator {
    JFrame frame = new JFrame("计算器");
    JPanel panel = new JPanel();
    JTextField textField = new JTextField(20);
    public static void main(String[] args) {
        new Calculator().init();
    }
    public void init () {
        List<String> list = new ArrayList<String> (Arrays.asList("7", "8", "9", "/", "C", "4", "5", "6", "*", "Sqrt",
                "1", "2", "3", "-", "1/x", "0", "+/-", ".", "+", "="));
        panel.setLayout(new GridLayout(4, 5));
        for (int i = 0; i < 20; i++) {
            panel.add(new JButton(list.get(i)));
        }
        frame.add(textField);
        frame.add(panel, BorderLayout.SOUTH);
        frame.pack();
        frame.setVisible(true);
    }
}
