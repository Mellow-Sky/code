import javax.swing.*;  // 导入Swing库，用于图形界面开发
import java.awt.*;  // 导入AWT库，用于窗口和布局管理
import java.awt.event.ActionEvent;  // 导入事件处理类
import java.awt.event.ActionListener;  // 导入事件监听器接口
import java.awt.event.ItemEvent;  // 导入复选框监听器的事件类
import java.awt.event.ItemListener;  // 导入复选框监听器接口
import java.util.ArrayList;  // 导入数组列表类
import java.util.Collections;  // 导入集合工具类，用于打乱列表顺序
import java.util.Random;  // 导入随机数生成类

public class GamePanel extends JPanel {  // 创建一个继承自JPanel的类，表示游戏面板
    // 图片路径和图片名称数组
    public String path = "..\\LianLianKanGame\\picture\\";
    public String[] imageNames = {"0.jpg", "1.jpg", "2.jpg", "3.jpg", "4.jpg", "5.jpg"};  // 存放图片名称的数组
    public ImageIcon gameBGImage = new ImageIcon(path + "gameBG.jpg");  // 游戏背景图片

    // 按钮位置及数量相关变量
    private ArrayList<Point> tiles = new ArrayList<>();  // 存储按钮位置的列表
    public static final int ROWS = 10;  // 游戏面板的行数
    public static final int COLS = 10;  // 游戏面板的列数
    public static final int TILE_SIZE = 70;  // 每个按钮的尺寸

    // 按钮组件
    JButton previous = new JButton("返回");  // 返回按钮
    JButton remake = new JButton("remake");  // 重开按钮
    // 分数和倒计时相关
    public int score = 0;  // 当前分数
    JLabel scoreLabel = new JLabel("score: " + score);  // 显示分数的标签
    public int timeLeft = 60;  // 游戏倒计时初始为60秒
    JLabel label = new JLabel("倒计时: " + timeLeft);  // 显示倒计时的标签

    // 游戏面板和按钮数组
    public JButton[][] buttons = new JButton[ROWS][COLS];  // 按钮数组
    private Point firstSelected = null;  // 第一个选中的按钮
    private Point secondSelected = null;  // 第二个选中的按钮
    public JPanel gameBoard = new JPanel();  // 游戏面板

    public GamePanel() {
        myTimer();  // 初始化倒计时功能
        initButton();  // 初始化按钮
        randomizeTiles();  // 随机化按钮排列
        addTileSelectionListener();  // 给每个按钮添加选择监听器
        UI();  // 初始化用户界面
    }

    public void myTimer() {
        // 初始化倒计时功能
        Timer timer = new Timer(1000, new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                timeLeft--;  // 每秒减少倒计时
                label.setText("倒计时：" + timeLeft);
                if (timeLeft <= 0) {
                    ((Timer) e.getSource()).stop();  // 时间结束，停止计时器
                    label.setText("时间到！");
                }
            }
        });
        timer.start();  // 启动倒计时器
    }

    public void UI() {
        // 设置界面元素的字体和样式
        Font buttonFont = new Font("宋体", Font.PLAIN, 20);
        Font font = new Font("宋体", Font.PLAIN, 40);
        scoreLabel.setFont(font);  // 设置分数标签字体
        label.setFont(font);  // 设置倒计时标签字体
        previous.setFont(buttonFont);  // 设置返回按钮字体
        previous.setBackground(new Color(102, 204, 255));  // 设置返回按钮背景颜色
        previous.setForeground(Color.BLACK);  // 设置返回按钮文字颜色
        previous.setBorder(BorderFactory.createEmptyBorder(10, 20, 10, 20));  // 设置按钮边距

        remake.setFont(buttonFont);  // 设置重开按钮字体
        remake.setBackground(new Color(102, 204, 255));  // 设置重开按钮背景颜色
        remake.setForeground(Color.BLACK);  // 设置重开按钮文字颜色
        remake.setBorder(BorderFactory.createEmptyBorder(10, 20, 10, 20));  // 设置按钮边距

        myPanel panel = new myPanel();  // 创建一个自定义面板
        panel.setLayout(new GridLayout(8, 1));  // 设置面板的布局为一列八行
        panel.setOpaque(false);  // 设置面板为透明
        panel.add(Box.createVerticalStrut(50));  // 添加垂直间距
        panel.add(label);  // 添加倒计时标签
        panel.add(Box.createVerticalStrut(20));  // 添加垂直间距
        panel.add(scoreLabel);  // 添加分数标签
        panel.add(Box.createVerticalStrut(50));  // 添加垂直间距
        panel.add(previous);  // 添加返回按钮
        panel.add(Box.createVerticalStrut(50));  // 添加垂直间距
        panel.add(remake);  // 添加重开按钮

        add(panel);  // 将面板添加到界面中
        add(gameBoard);  // 将游戏面板添加到界面中
    }

    public void initButton() {
        // 初始化按钮
        Random random = new Random();
        gameBoard.setLayout(new GridLayout(ROWS, COLS));  // 设置游戏面板的布局为网格布局
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                buttons[i][j] = new JButton();  // 创建一个新的按钮
                buttons[i][j].setPreferredSize(new Dimension(TILE_SIZE, TILE_SIZE));  // 设置按钮尺寸
                buttons[i][j].setFont(new Font("Arial", Font.BOLD, 20));  // 设置按钮字体
                buttons[i][j].setBackground(Color.LIGHT_GRAY);  // 设置按钮背景色
                buttons[i][j].setEnabled(false);  // 初始时禁用按钮
                gameBoard.add(buttons[i][j]);  // 将按钮添加到游戏面板
            }
        }
    }

    public void randomizeTiles() {
        // 随机化按钮排列
        tiles.clear();  // 清空按钮位置列表
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                tiles.add(new Point(i, j));  // 将每个位置加入列表
            }
        }

        Collections.shuffle(tiles);  // 打乱按钮位置
        int tileNumber = 1;  // 从1开始设置按钮
        for (Point p : tiles) {
            buttons[p.x][p.y].setText(String.valueOf(tileNumber));  // 设置按钮上的文本
            ImageIcon icon = new ImageIcon(path + imageNames[tileNumber]);  // 根据编号设置按钮图标
            buttons[p.x][p.y].setIcon(icon);  // 设置按钮图标
            buttons[p.x][p.y].setEnabled(true);  // 启用按钮
            tileNumber = (tileNumber % 5) + 1;  // 按顺序使用图片
        }
    }

    private void addTileSelectionListener() {
        // 给每个按钮添加点击事件监听器
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                final int x = i, y = j;
                buttons[x][y].addActionListener(new ActionListener() {
                    @Override
                    public void actionPerformed(ActionEvent e) {
                        handleTileSelection(x, y);  // 处理按钮点击事件
                    }
                });
            }
        }
    }

    private void handleTileSelection(int x, int y) {
        if (firstSelected == null) {
            firstSelected = new Point(x, y);  // 记录第一个按钮的位置
            buttons[x][y].setBackground(Color.YELLOW);  // 高亮第一个按钮
        } else if (secondSelected == null) {
            secondSelected = new Point(x, y);  // 记录第二个按钮的位置
            buttons[x][y].setBackground(Color.YELLOW);  // 高亮第二个按钮

            // 判断是否可以消除这两个按钮
            if (isMatch(firstSelected, secondSelected) && (firstSelected.x != secondSelected.x || firstSelected.y != secondSelected.y) && canRemove(firstSelected.x, firstSelected.y, secondSelected.x, secondSelected.y)) {
                buttons[firstSelected.x][firstSelected.y].setEnabled(false);  // 禁用第一个按钮
                buttons[secondSelected.x][secondSelected.y].setEnabled(false);  // 禁用第二个按钮
                score++;  // 增加分数
                updateScoreboard();  // 更新分数
                resetSelection();  // 重置选择
            } else {
                Timer timer = new Timer(500, e -> resetSelection());  // 如果不匹配，500毫秒后重置
                timer.setRepeats(false);  // 不重复执行
                timer.start();
            }
        }
    }

    private void resetSelection() {
        // 重置按钮选择
        if (firstSelected != null) {
            buttons[firstSelected.x][firstSelected.y].setBackground(Color.LIGHT_GRAY);
        }
        if (secondSelected != null) {
            buttons[secondSelected.x][secondSelected.y].setBackground(Color.LIGHT_GRAY);
        }
        firstSelected = null;  // 清空第一个按钮的记录
        secondSelected = null;  // 清空第二个按钮的记录
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        g.drawImage(gameBGImage.getImage(), 0, 0, getWidth(), getHeight(), this);  // 绘制背景图片
    }

    // 判断两个按钮是否可以消除
    private boolean canRemove(int x1, int y1, int x2, int y2) {
        boolean[][] visited = new boolean[ROWS][COLS];  // 初始化访问数组
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                if ((i == x1 && j == y1) || (i == x2 && j == y2)) {
                    continue;  // 跳过这两个按钮
                }
                if (buttons[i][j].isEnabled()) {
                    visited[i][j] = true;  // 标记已启用的按钮
                }
            }
        }
        return dfs(x1, y1, x2, y2, visited, -1, 0);  // 使用DFS算法判断是否可以消除
    }

    private boolean dfs(int x1, int y1, int x2, int y2, boolean[][] visited, int direction, int turns) {
        if (x1 < 0 || x1 >= ROWS || y1 < 0 || y1 >= COLS) {  // 超过边界
            return false;
        }
        if (visited[x1][y1]) {  // 如果已经访问过该位置
            return false;
        }
        if (x1 == x2 && y1 == y2) {  // 到达目标位置
            return true;
        }
        visited[x1][y1] = true;
        int[] dx = {-1, 1, 0, 0};  // 上下左右方向
        int[] dy = {0, 0, -1, 1};
        for (int i = 0; i < 4; i++) {
            if (dfs(x1 + dx[i], y1 + dy[i], x2, y2, visited, i, 0)) {
                return true;
            }
        }
        return false;
    }

    // 判断两个图像是否匹配
    private boolean isMatch(Point p1, Point p2) {
        return buttons[p1.x][p1.y].getText().equals(buttons[p2.x][p2.y].getText());  // 比较两个按钮上的文本是否相同
    }

    public void updateScoreboard() {
        scoreLabel.setText("score: " + score);  // 更新分数标签
    }
}

// 自定义面板类，用于绘制半透明的背景
class myPanel extends JPanel {
    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        g.setColor(new Color(255, 255, 255, 100));  // 设置颜色为半透明的白色
        g.fillRect(0, 0, getWidth(), getHeight());  // 绘制一个半透明的背景
    }
}
