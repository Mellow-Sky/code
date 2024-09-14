package test;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class test2 {
    public static void main(String[] args) {
        JFrame jFrame = new JFrame();
        //设置宽高
        jFrame.setSize(603, 680);
        //设置标题
        jFrame.setTitle("事件演示");
        //界面置顶
        jFrame.setAlwaysOnTop(true);
        //界面居中
        jFrame.setLocationRelativeTo(null);
        //设置关闭模式
        jFrame.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        //取消默认的居中放置，只有取消了才会按xy轴的形式添加组件
        jFrame.setLayout(null);


        //创建一个按钮对象
        JButton jtb = new JButton("点我");
        jtb.setBounds(0, 0, 100, 50);
//        jtb.addActionListener(new MyActionListener());

        jtb.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println("ciallo~");
            }
        });
        //把按钮添加到界面
        jFrame.getContentPane().add(jtb);

        jFrame.setVisible(true);
    }
}
