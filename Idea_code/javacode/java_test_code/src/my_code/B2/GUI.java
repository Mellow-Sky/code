package my_code.B2;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Random;

public class GUI {
    public static void main(String[] args) {
        GUI g = new GUI();
        g.init();
    }
    private final int rows = 5;
    private final int cols = 5;
    private int core = 0;
    private int[][] arr = new int[rows][cols];
    JFrame frame = new JFrame("connection and elimination");
    JLabel label = new JLabel("core : " + core);

    public void init() {
        randomArray(arr);
        core = 0;
        setFrame();
        frame.setBounds(700, 400, 400, 200);
        //frame.pack();
        frame.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
    public void setFrame() {
        JPanel panel1 = new JPanel();
        panel1.setLayout(new GridLayout(rows, cols));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                JButton button = new JButton("" + arr[i][j]);
                panel1.add(button);
                button.addActionListener(new ActionListener() {
                    @Override
                    public void actionPerformed(ActionEvent e) {

                    }
                });
            }
        }

        JPanel panel2 = new JPanel();
        panel2.setLayout(new BorderLayout(3, 1));
        panel2.add(label, BorderLayout.NORTH);
        JButton remake = new JButton("remake");
        JButton exit = new JButton("exit");
        panel2.add(remake, BorderLayout.SOUTH);
        panel2.add(exit, BorderLayout.CENTER);

        exit.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.exit(0);
            }
        });
        remake.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                randomArray(arr);
                core = 0;
                label.setText("core : " + core);
            }
        });

        frame.setLayout(new FlowLayout());
        frame.add(panel1);
        frame.add(panel2);
    }
    public void randomArray(int[][] arr) {
        Random random = new Random();
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                arr[i][j] = random.nextInt(10);
            }
        }
    }
}
