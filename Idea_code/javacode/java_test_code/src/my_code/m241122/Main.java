package my_code.m241122;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class Main extends JFrame implements ActionListener{
    private String username="";
    JTextField tmess=new JTextField();
    JTextArea tcontent=new JTextArea();
    public void setName(String name){
        username=name;
    }
    public Main(){
        this.setSize(300,400);		            //定义窗口 大小；
        JPanel panbig=new JPanel();
        JPanel pansmall=new JPanel();			//定义按钮和控件

        JButton bsend=new JButton("发送");
        bsend.addActionListener(this);
        JComboBox clist=new JComboBox();
        JScrollPane  ssend=new JScrollPane(tcontent);
        //设置布局管理；
        panbig.setLayout(new GridLayout(2,1)); //网格布局控件；
        pansmall.setLayout(new GridLayout(1,2));
        //面板上添加控件；
        pansmall.add(clist);
        pansmall.add(bsend);
        panbig.add(tmess);
        panbig.add(pansmall);
        clist.addItem("a2");  //在下拉列表框中添加一个用户名a2
        this.add(BorderLayout.SOUTH,panbig);  //窗体上添加控件
        this.add(BorderLayout.CENTER,ssend);
        this.setLocation(600, 300);         //窗体出现在界面的位置
        this.setTitle(username);            //使用户名作为窗体标题
    }
    @Override
    public void actionPerformed(ActionEvent e) {//发送信息的事件响应
        String str = username+":"+tmess.getText();
        //将用户名添到信息前面，形成要发送的字符串
        tcontent.append(str + "\n");      //将字符串添加到聊天信息；
        tmess.setText("");		           //清空发送信息的文本框
    }
}



