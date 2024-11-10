package homework.day241110;
import javax.swing.*;
import java.awt.*;

public class server {
    JFrame frame = new JFrame();
    JTextArea area = new JTextArea(20, 15);

    JPanel panel1 = new JPanel();
    JTextField field = new JTextField(15);
    JPanel panel2 = new JPanel();
    JButton ok = new JButton("确定");
    JButton canel = new JButton("取消");

    public server(String tittle) {
        frame.setTitle(tittle);
        frame.add(area);

        panel2.setLayout(new FlowLayout());
        panel2.add(ok);
        panel2.add(canel);
        panel1.setLayout(new GridLayout(3, 1));
        panel1.add(field);
        panel1.add(panel2);
        frame.add(panel1, BorderLayout.SOUTH);
        frame.setSize(600, 700);
        frame.setVisible(true);
    }

    public static void main(String[] args) {
        server s1 = new server("张三");
        server s2 = new server("李四");
    }

}
