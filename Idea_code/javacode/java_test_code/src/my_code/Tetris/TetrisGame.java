package my_code.Tetris;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class TetrisGame {
    private JFrame frame;
    private Board board;
    private Timer timer;
    private boolean isGameOver;

    public TetrisGame() {
        frame = new JFrame("Tetris");
        board = new Board();
        isGameOver = false;

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 600); // 根据需要调整窗口大小
        frame.setResizable(false);

        frame.add(board);
        frame.setVisible(true);

        timer = new Timer(500, new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if (!isGameOver) {
                    board.moveTetrominoDown();
                }
            }
        });
        timer.start();

        // Add key listener for controls
        frame.addKeyListener(new KeyAdapter() {
            @Override
            public void keyPressed(KeyEvent e) {
                if (isGameOver) return;
                switch (e.getKeyCode()) {
                    case KeyEvent.VK_LEFT:
                        board.moveTetrominoLeft();
                        break;
                    case KeyEvent.VK_RIGHT:
                        board.moveTetrominoRight();
                        break;
                    case KeyEvent.VK_DOWN:
                        board.moveTetrominoDown();
                        break;
                    case KeyEvent.VK_UP:
                        board.rotateTetromino();
                        break;
                    case KeyEvent.VK_SPACE:
                        board.dropTetromino();
                        break;
                }
            }
        });
    }

    public void start() {
        frame.setVisible(true);
    }

    public void gameOver() {
        isGameOver = true;
        timer.stop();
        JOptionPane.showMessageDialog(frame, "Game Over!");
    }

    public static void main(String[] args) {
        TetrisGame game = new TetrisGame();
        game.start();
    }
}

