import javax.swing.*;  // 导入Swing库，用于图形界面开发
import java.awt.*;  // 导入AWT库，用于窗口和布局管理
import java.awt.event.ActionEvent;  // 导入事件处理类
import java.awt.event.ActionListener;  // 导入事件监听器接口

public class GameClient extends JFrame {  // 创建一个继承JFrame的类，表示游戏客户端窗口
    private StartPanel startPanel;  // 声明开始面板
    private GamePanel gamePanel;  // 声明游戏面板

    public GameClient() {
        setTitle("连连看");  // 设置窗口标题
        setBounds(200, 100, 1200, 750);  // 设置窗口位置和大小
        setLocationRelativeTo(null);  // 设置窗口居中显示
        setDefaultCloseOperation(EXIT_ON_CLOSE);  // 设置关闭窗口时退出应用
        setVisible(true);  // 设置窗口可见
        creatStartPanel();  // 创建开始面板
    }

    // 创建开始面板
    void creatStartPanel() {
        startPanel = new StartPanel();  // 初始化开始面板
        add(startPanel, BorderLayout.CENTER);  // 将开始面板添加到窗口的中心位置

        // 添加开始按钮的事件监听器
        startPanel.startButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {  // 当点击开始按钮时执行
                gamePanel = new GamePanel();  // 创建游戏面板
                startPanel.setVisible(false);  // 隐藏开始面板
                add(gamePanel, BorderLayout.CENTER);  // 将游戏面板添加到窗口

                // 为返回按钮添加事件监听器
                gamePanel.previous.addActionListener(new ActionListener() {
                    @Override
                    public void actionPerformed(ActionEvent e) {
                        gamePanel.setVisible(false);  // 隐藏游戏面板
                        creatStartPanel();  // 重新创建开始面板
                    }
                });

                // 为重玩按钮添加事件监听器
                gamePanel.remake.addActionListener(new ActionListener() {
                    @Override
                    public void actionPerformed(ActionEvent e) {
                        try {
                            Thread.sleep(30);  // 稍微延迟30毫秒
                        } catch (Exception ee) {
                            ee.printStackTrace();  // 如果发生异常，打印异常信息
                        }
                        gamePanel.score = 0;  // 重置游戏分数
                        gamePanel.updateScoreboard();  // 更新分数板
                        gamePanel.randomizeTiles();  // 随机化游戏的图块
                        gamePanel.timeLeft = 61;  // 设置剩余时间为61秒
                    }
                });
            }
        });
    }

    // 主函数，程序入口
    public static void main(String[] args) {
        EventQueue.invokeLater(new Runnable() {
            public void run() {
                try {
                    GameClient gameClient = new GameClient();  // 创建游戏客户端
                } catch (Exception e) {
                    e.printStackTrace();  // 捕获异常并打印
                }
            }
        });
    }
}
