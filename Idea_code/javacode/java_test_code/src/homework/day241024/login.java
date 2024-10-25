package homework.day241024;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.*;
import java.util.List;

public class login implements ActionListener {

    List<String> userName = new ArrayList<String>();
    List<String> password = new ArrayList<String>();

    JFrame frame = new JFrame("登录界面");
    JLabel userNameLabel = new JLabel("用户名");
    JTextField userNameText = new JTextField(15);
    JLabel passwordLabel = new JLabel("密码");
    JPasswordField passWordText = new JPasswordField(15);

    JPanel panel1 = new JPanel();
    JPanel panel2 = new JPanel();
    JButton buttonLogin = new JButton("登录");
    JButton buttonEnroll = new JButton("注册");
    JButton buttonCancel = new JButton("取消");



    public void init () {
        panel2.setLayout(new GridLayout(2, 2));
        panel2.add(userNameLabel);
        panel2.add(userNameText);
        panel2.add(passwordLabel);
        panel2.add(passWordText);
        frame.add(panel2);
        panel1.add(buttonLogin);
        panel1.add(buttonEnroll);
        panel1.add(buttonCancel);
        frame.add(panel1, BorderLayout.SOUTH);

        buttonLogin.addActionListener(this);
        buttonEnroll.addActionListener(this);
        buttonCancel.addActionListener(this);

        frame.setBounds(200, 200, 300, 150);
        frame.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == buttonLogin) {
            boolean b = false;//判断账号密码是否正确
            for(int i = 0; i < userName.size(); i++) {
                if(userName.get(i).equals(userNameText.getText()) && password.get(i).equals(passWordText.getText())) {
                    b = true;
                }
            }
            //登录成功
            if(b) {
                frame.setVisible(false);
                new chat().init();
                System.out.println("登录成功");
            } else {
                JDialog loginFail = new JDialog(frame, "登录失败");
                JLabel label = new JLabel("登录失败");
                loginFail.add(label);
                loginFail.pack();
                loginFail.setVisible(true);
                System.out.println("登录失败");
            }
        } else if (e.getSource() == buttonEnroll) {
            boolean b = false;//判断用户名是否存在
            for(int i = 0; i < userName.size(); i++) {
                if(userName.get(i).equals(userNameText.getText())) {
                    b = true;
                }
            }
            if(b) {//用户名存在
                JDialog loginFail = new JDialog(frame, "用户名存在");
                JLabel label = new JLabel("用户名存在");
                loginFail.add(label);
                loginFail.pack();
                loginFail.setVisible(true);
            } else {//用户名不存在则注册
                userName.add(userNameText.getText());
                password.add(passWordText.getText());
                JDialog loginFail = new JDialog(frame, "注册成功");
                JLabel label = new JLabel("注册成功");
                loginFail.add(label);
                loginFail.pack();
                loginFail.setVisible(true);
                System.out.println("注册成功");
            }
        } else if (e.getSource() == buttonCancel) {
            System.exit(0);
        }
    }
}
