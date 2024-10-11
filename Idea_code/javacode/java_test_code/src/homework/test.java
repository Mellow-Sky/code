package homework;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class test {

    public static void main(String[] args) {
        new test();
    }

    Frame f = new Frame();
    Label l1 = new Label("输入去个数字:");
    TextField t1 = new TextField(8);
    TextField t2 = new TextField(8);
    Button b1 = new Button("平方");
    Button b2 = new Button("立方");

    public test() {
        f.setSize(320, 200);
        f.setLayout(new FlowLayout());
        f.add(l1);
        f.add(t1);
        f.add(t2);
        f.add(b1);
        f.add(b2);
        b1.addActionListener(new Handler());
        b2.addActionListener(new Handler() {
            public void actionPerformed(ActionEvent arg0) {
                super.actionPerformed(arg0);
                String number = t1.getText();
                int n = Integer.parseInt(number);
                int m = n * n * n;
                t2.setText("" + m);
            }
        });
        f.setVisible(true);
    }
    class Handler implements ActionListener {
        public void actionPerformed(ActionEvent arg0) {
            String number = t1.getText();
            int n = Integer.parseInt(number);
            int m = n * n;
            t2.setText("" + m);
        }
    }
}