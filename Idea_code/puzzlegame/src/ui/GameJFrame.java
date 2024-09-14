package ui;

import javax.swing.*;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.util.Random;

//游戏主界面
public class GameJFrame extends JFrame implements KeyListener {
    //管理数据
    //加载图片需要
    int[][] data = new int[4][4];
    //记录空白方块位置
    int x = 0;
    int y = 0;

    public GameJFrame() {
        //初始化界面
        initJFrame();

        //初始化菜单
        initJMenuBar();

        //初始化数据
        initData();

        //初始化图片
        initImage();

        //让界面显示出来
        this.setVisible(true);
    }



    //初始化数据
    private void initData() {
        int[] tempArr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
        Random r = new Random();
        for (int i = 0; i < tempArr.length; i++) {
            int index = r.nextInt(tempArr.length);
            int temp = tempArr[i];
            tempArr[i] = tempArr[index];
            tempArr[index] = temp;
        }
        for (int i = 0; i < tempArr.length; i++) {
            if(tempArr[i] == 0) {
                x = i / 4;
                y = i % 4;
            }
        }
        for (int i = 0; i < tempArr.length; i++) {
            data[i / 4][i % 4] = tempArr[i];
        }
    }


    //初始化图片
    private void initImage() {
        //清空已经出现的图片
        this.getContentPane().removeAll();

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                //获取当前要加载图片的序号
                int number = data[i][j];
                //创建给Jlabel的对象（管理容器）
                JLabel jLabel = new JLabel(new ImageIcon("D:\\枍\\Downloads\\C self learning\\code\\Idea_code\\puzzlegame\\image\\yuzi\\segment_" + number + ".png"));
                //指定图片位置
                jLabel.setBounds(105 * j, 105 * i, 105, 105);
                //把管理容器添加到界面中
                this.getContentPane().add(jLabel);
            }
        }

        JLabel background = new JLabel(new ImageIcon("D:\\枍\\Downloads\\C self learning\\code\\Idea_code\\puzzlegame\\image\\background.png"));
        background.setBounds(40, 40, 508, 560);
        //把背景图片添加到界面当中
        this.getContentPane().add(background);

        //刷新界面
        this.getContentPane().repaint();
    }

    private void initJMenuBar() {
        //初始化菜单
        //创建整个菜单对象
        JMenuBar jMenuBar = new JMenuBar();

        //创建菜单上的选项（功能,关于我们）
        JMenu functionJMenu = new JMenu("功能");
        JMenu aboutJMenu = new JMenu("关于");

        //创建选项下面的条目
        JMenuItem replayItem = new JMenuItem("重新游戏");
        JMenuItem reloginItem = new JMenuItem("重新登录");
        JMenuItem closeItem = new JMenuItem("关闭游戏");


        JMenuItem accountItem = new JMenuItem("我的博客");

        //将每个选项下面的条目添加的选项当中
        functionJMenu.add(replayItem);
        functionJMenu.add(reloginItem);
        functionJMenu.add(closeItem);

        aboutJMenu.add(accountItem);

        //将菜单里面的两个选项添加到菜单中
        jMenuBar.add(functionJMenu);
        jMenuBar.add(aboutJMenu);

        //给整个界面设置菜单
        this.setJMenuBar(jMenuBar);
    }

    private void initJFrame() {
        //设置界面的宽高
        this.setSize(603, 680);
        //设置界面的标题
        this.setTitle("柚子厨拼图单机版 v1.0");
        //设置界面置顶
        this.setAlwaysOnTop(true);
        //设置界面居中
        this.setLocationRelativeTo(null);
        //设置关闭模式
        this.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        //取消默认的居中放置
        this.setLayout(null);
        //给整个界面添加键盘监听事件
        this.addKeyListener(this);
    }

    @Override
    public void keyTyped(KeyEvent e) {

    }

    @Override
    public void keyPressed(KeyEvent e) {

    }

    @Override
    public void keyReleased(KeyEvent e) {
        //对上下左右判定
        //左37 上38 右39 下40
        int code = e.getKeyCode();
        if(code == 37) {
            System.out.println("左");
        }else if(code == 38) {
            System.out.println("上");
            data[x][y] = data[x + 1][y];
            data[x + 1][y] = 0;
            x++;
            //重新加载图片
            this.addKeyListener(this);
        }else if(code == 39) {
            System.out.println("右");
        }else if(code == 40) {
            System.out.println("下");
        }
    }
}
