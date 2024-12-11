import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class StartPanel extends JPanel {
    JLabel tittle = new JLabel("连连看-天依版");
    JButton startButton = new JButton("开始游戏");
    JButton exit = new JButton("离开");
    JButton about = new JButton("about");
    private ImageIcon backgroundImage = new ImageIcon("..\\LianLianKanGame\\picture\\startBG.jpg");

    public StartPanel() {
        // 设置字体
        Font buttonFont = new Font("宋体", Font.PLAIN, 20); // 使用宋体字体
        startButton.setFont(buttonFont);
        startButton.setBackground(new Color(102, 204, 255));
        startButton.setForeground(Color.BLACK);
        startButton.setBorder(BorderFactory.createEmptyBorder(10, 20, 10, 20));

        exit.setFont(buttonFont);
        exit.setBackground(new Color(102, 204, 255));
        exit.setForeground(Color.BLACK);
        exit.setBorder(BorderFactory.createEmptyBorder(10, 20, 10, 20));
        exit.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.exit(0);
            }
        });

        about.setFont(buttonFont);
        about.setBackground(new Color(102, 204, 255));
        about.setForeground(Color.BLACK);
        about.setBorder(BorderFactory.createEmptyBorder(10, 20, 10, 20));
        about.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                JDialog dialog = new JDialog();
                JTextArea label = new JTextArea("这是一个简单的连连看小游戏\nThis is a simple Lianliankan game\n" +
                        "Make in : 23034225wuqili\nMake Data : 2024/12/10");
                label.setFont(buttonFont);
                dialog.add(label);
                dialog.setBounds(300, 300, 300, 400);
                dialog.setVisible(true);
            }
        });

        tittle.setFont(buttonFont);
        tittle.setBackground(new Color(102, 204, 255));
        tittle.setForeground(Color.WHITE);
        tittle.setBorder(BorderFactory.createEmptyBorder(10, 20, 10, 20));

        // 垂直布局
        setLayout(new BoxLayout(this, BoxLayout.Y_AXIS));
        add(tittle);
        add(Box.createVerticalStrut(100)); // 增加垂直间距
        add(startButton);
        add(Box.createVerticalStrut(50));
        add(about);
        add(Box.createVerticalStrut(50));
        add(exit);
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        g.drawImage(backgroundImage.getImage(), 0, 0, getWidth(), getHeight(), this);
    }
}
