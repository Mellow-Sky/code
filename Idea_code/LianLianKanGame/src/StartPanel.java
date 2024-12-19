import javax.swing.*;  // 导入Swing库，用于图形界面开发
import java.awt.*;  // 导入AWT库，用于窗口和布局管理
import java.awt.event.ActionEvent;  // 导入事件处理类
import java.awt.event.ActionListener;  // 导入事件监听器接口

public class StartPanel extends JPanel {  // 创建一个继承自JPanel的类，表示游戏的开始面板
    JLabel tittle = new JLabel("连连看-天依版");  // 创建一个标签，显示游戏标题
    JButton startButton = new JButton("开始游戏");  // 创建一个按钮，表示开始游戏
    JButton exit = new JButton("离开");  // 创建一个按钮，表示退出游戏
    JButton about = new JButton("about");  // 创建一个按钮，表示关于信息
    private ImageIcon backgroundImage = new ImageIcon("..\\LianLianKanGame\\picture\\startBG.jpg");  // 设置背景图片

    public StartPanel() {
        // 设置字体样式
        Font buttonFont = new Font("宋体", Font.PLAIN, 20);  // 设置按钮字体为宋体，字号为20
        startButton.setFont(buttonFont);  // 设置开始按钮字体
        startButton.setBackground(new Color(102, 204, 255));  // 设置开始按钮背景颜色
        startButton.setForeground(Color.BLACK);  // 设置开始按钮文字颜色
        startButton.setBorder(BorderFactory.createEmptyBorder(10, 20, 10, 20));  // 设置按钮的内边距

        // 设置退出按钮样式
        exit.setFont(buttonFont);  // 设置退出按钮字体
        exit.setBackground(new Color(102, 204, 255));  // 设置退出按钮背景颜色
        exit.setForeground(Color.BLACK);  // 设置退出按钮文字颜色
        exit.setBorder(BorderFactory.createEmptyBorder(10, 20, 10, 20));  // 设置按钮的内边距
        exit.addActionListener(new ActionListener() {  // 添加退出按钮的点击事件监听器
            @Override
            public void actionPerformed(ActionEvent e) {
                System.exit(0);  // 点击后退出程序
            }
        });

        // 设置关于按钮样式
        about.setFont(buttonFont);  // 设置关于按钮字体
        about.setBackground(new Color(102, 204, 255));  // 设置关于按钮背景颜色
        about.setForeground(Color.BLACK);  // 设置关于按钮文字颜色
        about.setBorder(BorderFactory.createEmptyBorder(10, 20, 10, 20));  // 设置按钮的内边距
        about.addActionListener(new ActionListener() {  // 添加关于按钮的点击事件监听器
            @Override
            public void actionPerformed(ActionEvent e) {
                JDialog dialog = new JDialog();  // 创建一个对话框
                JTextArea label = new JTextArea("这是一个简单的连连看小游戏\nThis is a simple Lianliankan game\n" +
                        "Make in : 23034225wuqili\nMake Data : 2024/12/10");  // 创建一个文本区域显示游戏信息
                label.setFont(buttonFont);  // 设置文本区域字体
                dialog.add(label);  // 将文本区域添加到对话框
                dialog.setBounds(300, 300, 300, 400);  // 设置对话框位置和大小
                dialog.setVisible(true);  // 显示对话框
            }
        });

        // 设置标题样式
        tittle.setFont(buttonFont);  // 设置标题字体
        tittle.setBackground(new Color(102, 204, 255));  // 设置标题背景颜色
        tittle.setForeground(Color.WHITE);  // 设置标题文字颜色
        tittle.setBorder(BorderFactory.createEmptyBorder(10, 20, 10, 20));  // 设置标题的内边距

        // 设置面板的布局方式为垂直布局
        setLayout(new BoxLayout(this, BoxLayout.Y_AXIS));
        add(tittle);  // 将标题添加到面板
        add(Box.createVerticalStrut(100));  // 增加100像素的垂直间距
        add(startButton);  // 将开始按钮添加到面板
        add(Box.createVerticalStrut(50));  // 增加50像素的垂直间距
        add(about);  // 将关于按钮添加到面板
        add(Box.createVerticalStrut(50));  // 增加50像素的垂直间距
        add(exit);  // 将退出按钮添加到面板
    }

    // 重写paintComponent方法，用于绘制背景图片
    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);  // 调用父类的paintComponent方法
        g.drawImage(backgroundImage.getImage(), 0, 0, getWidth(), getHeight(), this);  // 绘制背景图片，拉伸至面板大小
    }
}
