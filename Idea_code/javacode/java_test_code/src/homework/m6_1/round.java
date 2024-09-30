package homework.m6_1;
import javax.swing.*;
import java.awt.*;

public class round extends JPanel {
    private double x = 50;  // 水平初始位置
    private double y = 50;  // 垂直初始位置
    private double vX = 2;  // 水平速度
    private double vY = 0;  // 垂直速度
    private double g = 0.2; // 重力加速度

    public round() {
        // 创建一个线程来运行动画
        new Thread(new Runnable() {
            @Override
            public void run() {
                while (true) {  // 无限循环以不断刷新界面
                    try {
                        // 更新小球位置
                        updateBallPosition();

                        // 让线程休眠16毫秒（相当于每秒60帧）
                        Thread.sleep(16);
                    } catch (Exception e) {
                        System.err.println(e);
                    }
                    // 重新绘制界面
                    repaint();
                }
            }
        }).start();
    }

    // 更新小球位置
    private void updateBallPosition() {
        x += vX;  // 水平位置随时间变化
        y += vY;  // 垂直位置随时间变化
        vY += g;  // 由于重力的作用，垂直速度增加

        // 防止小球超出窗口底部
        if (y > getHeight() - 20) {
            y = getHeight() - 20;
            vY = -vY * 0.6; // 模拟反弹，减少速度
        }
    }

    @Override
    public void paintComponent(Graphics g) {
        super.paintComponent(g);
        g.setColor(Color.RED);
        g.fillOval((int)x, (int)y, 20, 20);  // 绘制小球
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame("抛物线小球");
        round ball = new round();
        frame.add(ball);
        frame.setSize(800, 600);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
