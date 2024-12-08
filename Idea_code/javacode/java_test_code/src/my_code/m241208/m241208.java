package my_code.m241208;

import javax.swing.*;
import java.awt.*;
public class m241208 extends JPanel {
    double x = 50;
    double y = 50;
    double vx = 2;
    double vy = 0;
    double g = 0.2;

    public static void main(String[] args) {
        JFrame frame = new JFrame("ball");
        m241208 ball = new m241208();
        frame.add(ball);
        frame.setSize(800, 600);
        frame.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
    public m241208() {
        new Thread(new Runnable() {
            @Override
            public void run() {
                while (true) {
                    try {
                        updateball();
                        Thread.sleep(16);
                    } catch (Exception e) {
                        System.err.println(e);
                    }
                    repaint();
                }
            }
        }).start();
    }

    public void updateball() {
        x += vx;
        y += vy;
        vy += g;
        if (y > getHeight() - 20) {
            y = getHeight() - 20;
            vy = -vy * 0.6;
        }
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        g.setColor(Color.RED);
        g.fillOval((int)x, (int)y, 20, 20);
    }
}
//public class m241208 extends JPanel {
//    double x = 50;
//    double y = 50;
//    double vx = 2;
//    double vy = 0;
//    double g = 0.2;
//
//    public m241208() {
//        new Thread(new Runnable() {
//            @Override
//            public void run() {
//                while (true) {
//                    try {
//                        updateball();
//                        Thread.sleep(16);
//                    } catch (Exception e) {
//                        System.err.println(e);
//                    }
//                    repaint();
//                }
//            }
//        }).start();
//    }
//    private void updateball() {
//        x += vx;
//        y += vy;
//        vy += g;
//        if (y > getHeight() - 20) {
//            y = getHeight() - 20;
//            vy = -vy * 0.6;
//        }
//    }
//
//    @Override
//    protected void paintComponent(Graphics g) {
//        super.paintComponent(g);
//        g.setColor(Color.RED);
//        g.fillOval((int)x, (int)y, 20, 20);
//    }
//
//    public static void main(String[] args) {
//        JFrame frame = new JFrame("ball");
//        m241208 ball = new m241208();
//        frame.add(ball);
//        frame.setSize(800, 600);
//        frame.setVisible(true);
//    }
////public static void main(String[] args) {
////    new Thread(
////            ()->System.out.println("aaa")
////    ){
////        public void run(){
////            System.out.println("bbbb");
////        }
////    }.start();
////
////}
//}
