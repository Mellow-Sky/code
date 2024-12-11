import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class GameClient extends JFrame {
    private StartPanel startPanel;
    private GamePanel gamePanel;

    public GameClient() {
        setTitle("连连看");
        setBounds(200, 100, 1200, 750);
        setLocationRelativeTo(null);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setVisible(true);
        creatStartPanel();
    }

    void creatStartPanel() {
        startPanel = new StartPanel();
        add(startPanel, BorderLayout.CENTER);

        startPanel.startButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                gamePanel = new GamePanel();
                startPanel.setVisible(false);
                add(gamePanel, BorderLayout.CENTER);

                gamePanel.previous.addActionListener(new ActionListener() {
                    @Override
                    public void actionPerformed(ActionEvent e) {
                        gamePanel.setVisible(false);
                        creatStartPanel();
                    }
                });
                gamePanel.remake.addActionListener(new ActionListener() {
                    @Override
                    public void actionPerformed(ActionEvent e) {
                        try {
                            Thread.sleep(30);
                        } catch (Exception ee) {
                            ee.printStackTrace();
                        }
                        gamePanel.score = 0;
                        gamePanel.updateScoreboard();
                        gamePanel.randomizeTiles();
                        gamePanel.timeLeft = 61;
                    }
                });
            }
        });
    }

    public static void main(String[] args) {
        EventQueue.invokeLater(new Runnable() {
            public void run() {
                try {
                    GameClient gameClient = new GameClient();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
    }
}
