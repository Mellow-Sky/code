package ui;

import javax.swing.*;
//注册界面
public class RegisterJframe extends JFrame {
    public RegisterJframe() {
        //创建对象即初始化并打开界面
        this.setSize(488, 500);

        //设置界面的标题
        this.setTitle("柚子厨拼图 注册");
        //设置界面置顶
        this.setAlwaysOnTop(true);
        //设置界面居中
        this.setLocationRelativeTo(null);
        //设置关闭模式
        this.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);

        this.setVisible(true);
    }
}
