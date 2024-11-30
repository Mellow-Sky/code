package my_code.m241122;

import javax.swing.*;
//import org.omg.CORBA.portable.ValueOutputStream;
import java.awt.*;
import java.awt.event.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;

public class Login extends JFrame implements ActionListener {
    JTextField tuser=new JTextField();
    JPasswordField tpass=new JPasswordField();
    public Login(){                 //搭建窗体界面
        this.setSize(260,120);         //指定大小
        this.setLocation(300, 300);
        JPanel Jtext=new JPanel();//添加文本框面板Jtext;
        Jtext.setLayout(new GridLayout(2,2));
        JLabel luser=new JLabel("用户名：");
        JLabel lpass=new JLabel("密码：");
        Jtext.add(luser);
        Jtext.add(tuser);             //添加用户名，密码组件
        Jtext.add(lpass);
        Jtext.add(tpass);
        JPanel Jbutton=new JPanel(); //添加按钮面板Jbutton;
        JButton blogin=new JButton("登录");
        JButton breg=new JButton("注册");
        JButton bcancel=new JButton("取消");

        blogin.addActionListener(this);
        breg.addActionListener(this);
        bcancel.addActionListener(this);
        //注册三个按钮的事件监听器
        Jbutton.add(blogin);
        Jbutton.add( breg);
        Jbutton.add(bcancel);
        //将三个按钮添加到面板Jbutton上
        this.add(BorderLayout.CENTER,Jtext); //面板添加到窗体上；
        this.add(BorderLayout.SOUTH,Jbutton);
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);//窗体关闭
    }
    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Login f=new Login();//创建登录窗口；
        f.setVisible(true);            //窗口可见
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getActionCommand().equals("登录")){
            String user=tuser.getText();
            String pass=String.valueOf(tpass.getPassword());//获取用户名和密码；
            if(user.equals("aaa")&&pass.equals("111")){
                System.out.println("登录成功");
                //如果用户名是aaa，密码是111，登录成功
                Main fmain=new Main(); //创建聊天界面
                fmain.setLocation(300, 300);
                fmain.setName(user);              //设置窗体的显示用户
                fmain.setVisible(true);              //聊天窗体可见
                this.setVisible(false);               //登录界面消失
            }
        }
        if (e.getActionCommand().equals("注册")){ //是注册按钮
        }
        if (e.getActionCommand().equals("取消")){//是取消按钮
            System.exit(0);                     //退出系统
        }
    }

}
