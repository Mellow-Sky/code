package my_code.m241225;
import java.awt.*;

public class m241225 {
    public static void main(String[] args) {
//        Frame f = new Frame();
//        f.setVisible(true);
//        f.setSize(400, 400);
//        f.setBackground(Color.BLACK);
//        mypanel p = new mypanel();
//        f.add(p);
//        Thread t = new Thread(p);
//        t.start();



        Frame f = new Frame();
        f.setSize(400, 400);
        f.setVisible(true);
        mypanel p = new mypanel();
        f.add(p);
        new Thread(p).start();


    }
}

class mypanel extends Panel implements Runnable{
    double x = 30, y = 0;
    double vx = 2, vy = 0;
    double g = 0.2;

    @Override
    public void paint(Graphics g) {
        g.fillOval((int)x, (int)y, 30, 30);
    }

    @Override
    public void run() {
        try {
            while (true) {

                x += vx;
                y += vy;
                vy += g;
                if (y > getHeight() - 30) {
                    y = getHeight() - 30;
                    vy = -vy * 0.6;
                }

                repaint();
                Thread.sleep(16);
            }
        } catch (Exception e) {

        }
    }
}













//class mypanel extends Panel implements Runnable {
//    int cnt = 400;
//    int[] x = new int[cnt];
//    int[] y = new int[cnt];
//
//    mypanel() {
//        for (int i = 0; i < cnt; i++) {
//            x[i] = (int)(Math.random() * 400);
//            y[i] = (int)(Math.random() * 400);
//        }
//    }
//
//    @Override
//    public void run() {
//        try {
//            while (true) {
//                Thread.sleep(20);
//                for (int i = 0; i < cnt; i++) {
//                    if (y[i] > cnt) {
//                        y[i] = 0;
//                    } else {
//                        y[i]++;
//                    }
//                }
//                repaint();
//            }
//        } catch (Exception e) {
//
//        }
//    }
//
//    @Override
//    public void paint(Graphics g) {
//        g.setColor(Color.WHITE);
//        for (int i = 0; i < cnt; i++) {
//            g.drawString("*", x[i], y[i]);
//        }
//    }
//}