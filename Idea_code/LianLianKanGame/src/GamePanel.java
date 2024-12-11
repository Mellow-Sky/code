import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Random;

public class GamePanel extends JPanel {
    // 图片地址
    public String path = "..\\LianLianKanGame\\picture\\";
    public String[] imageNames = {"0.jpg", "1.jpg", "2.jpg", "3.jpg", "4.jpg", "5.jpg"};
    public ImageIcon gameBGImage = new ImageIcon(path + "gameBG.jpg");
    // 按钮位置以及按钮个数大小
    private ArrayList<Point> tiles = new ArrayList<>();
    public static final int ROWS = 10;
    public static final int COLS = 10;
    public static final int TILE_SIZE = 70;

    // 上一个界面
    JButton previous = new JButton("返回");
    // 重开
    JButton remake = new JButton("remake");
    // 分数面板
    public int score = 0;
    JLabel scoreLabel = new JLabel("score: " + score);
    // 倒计时
    public int timeLeft = 60; // 设置倒计时时间为60秒
    JLabel label = new JLabel("倒计时: " + timeLeft);
    // 困难模式， 折点限制
//    public boolean b = false;
//    JCheckBox diffcul = new JCheckBox("困难模式");

    public JButton[][] buttons = new JButton[ROWS][COLS];
    private Point firstSelected = null;
    private Point secondSelected = null;
    public JPanel gameBoard = new JPanel();
    public GamePanel() {
        myTimer();
        initButton();
        randomizeTiles();
        addTileSelectionListener();
        UI();
    }

    public void myTimer() {
        Timer timer = new Timer(1000, new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                timeLeft--;
                label.setText("倒计时：" + timeLeft);
                if (timeLeft <= 0) {
                    ((Timer) e.getSource()).stop();
                    label.setText("时间到！");
                }
            }
        });
        timer.start();
    }

    public void UI() {
        Font buttonFont = new Font("宋体", Font.PLAIN, 20);
        Font font = new Font("宋体", Font.PLAIN, 40);
        scoreLabel.setFont(font);
        label.setFont(font);
        previous.setFont(buttonFont);
        previous.setBackground(new Color(102, 204, 255));
        previous.setForeground(Color.BLACK);
        previous.setBorder(BorderFactory.createEmptyBorder(10, 20, 10, 20));

        remake.setFont(buttonFont);
        remake.setBackground(new Color(102, 204, 255));
        remake.setForeground(Color.BLACK);
        remake.setBorder(BorderFactory.createEmptyBorder(10, 20, 10, 20));

//        diffcul.setFont(buttonFont);
//        diffcul.setBackground(new Color(102, 204, 255));
//        diffcul.setForeground(Color.BLACK);
//        diffcul.setBorder(BorderFactory.createEmptyBorder(10, 20, 10, 20));
//        diffcul.addItemListener(new ItemListener() {
//            @Override
//            public void itemStateChanged(ItemEvent e) {
//                if (diffcul.isSelected()) {
//                    b = true;
//                } else {
//                    b = false;
//                }
//            }
//        });

        myPanel panel = new myPanel();

        panel.setLayout(new GridLayout(8, 1));
        // 设置背景透明
        panel.setOpaque(false);
        panel.add(Box.createVerticalStrut(50));
        panel.add(label);
        panel.add(Box.createVerticalStrut(20));
        panel.add(scoreLabel);
        panel.add(Box.createVerticalStrut(50));
        panel.add(previous);
        panel.add(Box.createVerticalStrut(50));
        panel.add(remake);
        //panel.add(Box.createVerticalStrut(50));
        //panel.add(diffcul);

        add(panel);
        add(gameBoard);
    }

    public void initButton() {
        // 本方法用于添加按钮
        Random random = new Random();
        gameBoard.setLayout(new GridLayout(ROWS, COLS));
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                buttons[i][j] = new JButton();
                buttons[i][j].setPreferredSize(new Dimension(TILE_SIZE, TILE_SIZE));
                buttons[i][j].setFont(new Font("Arial", Font.BOLD, 20));
                buttons[i][j].setBackground(Color.LIGHT_GRAY);
                buttons[i][j].setEnabled(false); // 初始时禁用按钮
                gameBoard.add(buttons[i][j]);  // 将按钮添加到面板上
            }
        }
    }

    public void randomizeTiles() {
        // 随机
        tiles.clear();
        // Create a list of all tile positions
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                tiles.add(new Point(i, j));
            }
        }

        Collections.shuffle(tiles);
        int tileNumber = 1;
        for (Point p : tiles) {
            buttons[p.x][p.y].setText(String.valueOf(tileNumber));
            ImageIcon icon = new ImageIcon(path + imageNames[tileNumber]);
            buttons[p.x][p.y].setIcon(icon);
            buttons[p.x][p.y].setEnabled(true);
            tileNumber = (tileNumber % 5) + 1;
        }
    }

    private void addTileSelectionListener() {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                final int x = i, y = j;
                buttons[x][y].addActionListener(new ActionListener() {
                    @Override
                    public void actionPerformed(ActionEvent e) {
                        handleTileSelection(x, y);
                    }
                });
            }
        }
    }

    private void handleTileSelection(int x, int y) {
//        if (diffcul.isSelected()) {
//            b = true;
//        } else {
//            b = false;
//        }

        if (firstSelected == null) {
            firstSelected = new Point(x, y);
            buttons[x][y].setBackground(Color.YELLOW);
        } else if (secondSelected == null) {
            secondSelected = new Point(x, y);
            buttons[x][y].setBackground(Color.YELLOW);

            if (isMatch(firstSelected, secondSelected) && (firstSelected.x != secondSelected.x || firstSelected.y != secondSelected.y) && canRemove(firstSelected.x, firstSelected.y, secondSelected.x, secondSelected.y)) {
                buttons[firstSelected.x][firstSelected.y].setEnabled(false);
                buttons[secondSelected.x][secondSelected.y].setEnabled(false);
                score++;
                updateScoreboard();
                resetSelection();
            } else {
                Timer timer = new Timer(500, e -> resetSelection());
                timer.setRepeats(false);
                timer.start();
            }
        }
    }

    private void resetSelection() {
        if (firstSelected != null) {
            buttons[firstSelected.x][firstSelected.y].setBackground(Color.LIGHT_GRAY);
        }
        if (secondSelected != null) {
            buttons[secondSelected.x][secondSelected.y].setBackground(Color.LIGHT_GRAY);
        }
        firstSelected = null;
        secondSelected = null;
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        g.drawImage(gameBGImage.getImage(), 0, 0, getWidth(), getHeight(), this);
    }

    // 使用DFS判断两个是否可以相消
    private boolean canRemove(int x1, int y1, int x2, int y2) {
        // 初始化访问数组
        boolean[][] visited = new boolean[ROWS][COLS];
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                if ((i == x1 && j == y1) || (i == x2 && j == y2)) {
                    continue;
                }
                if (buttons[i][j].isEnabled()) {
                        visited[i][j] = true;
                }
            }
        }
        // 开始 DFS 搜索
        return dfs(x1, y1, x2, y2, visited, -1, 0);
    }
    private boolean dfs(int x1, int y1, int x2, int y2, boolean[][] visited, int direction, int turns) {
        // 如果超出边界
        if (x1 < 0 || x1 >= ROWS || y1 < 0 || y1 >= COLS) {
            return false;
        }
        // 如果已经访问过该位置
        if (visited[x1][y1]) {
            return false;
        }
        // 如果达到了目标位置
        if (x1 == x2 && y1 == y2) {
            return true;
        }
        // 标记当前位置为已访问
        visited[x1][y1] = true;
        // 当前方向（-1 表示起始位置无方向）
        int[] dx = {-1, 1, 0, 0};  // 上下左右
        int[] dy = {0, 0, -1, 1};
        // 循环四个方向
        for (int i = 0; i < 4; i++) {
            // 计算转折次数, 因为上下左右的固定顺序导致有略微bug
//            if (true) {
//                int newTurns = turns + (direction != -1 && direction != i ? 1 : 0);
//                if (newTurns > 3) {
//                    continue; // 如果转折次数超过 3 次，跳过
//                }
//            }
            // 递归 DFS 搜索
            if (dfs(x1 + dx[i], y1 + dy[i], x2, y2, visited, i, 0)) {
                return true;
            }
        }
        return false;
    }

    // 判断图像是否相同
    private boolean isMatch(Point p1, Point p2) {
        // Check if the numbers match (you can customize matching logic here)
        return buttons[p1.x][p1.y].getText().equals(buttons[p2.x][p2.y].getText());
    }

    public void updateScoreboard() {
        scoreLabel.setText("score: " + score);
    }
}

class myPanel extends JPanel {
    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        g.setColor(new Color(255, 255, 255, 100));
        g.fillRect(0, 0, getWidth(), getHeight());
    }
}