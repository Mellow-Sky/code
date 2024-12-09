package my_code.Tetris;

import java.awt.*;
import javax.swing.*;
import java.util.*;

public class Board extends JPanel {
    private static final int BOARD_WIDTH = 10;
    private static final int BOARD_HEIGHT = 20;
    private Tetromino currentTetromino;
    private int[][] board;  // 0: 空白，1: 已放置方块

    public Board() {
        board = new int[BOARD_HEIGHT][BOARD_WIDTH];
        generateNewTetromino();
    }

    public void moveTetrominoDown() {
        if (canMoveDown()) {
            currentTetromino.moveDown();
            repaint();
        } else {
            placeTetromino();
            clearFullLines();
            generateNewTetromino();
        }
    }

    public void moveTetrominoLeft() {
        if (canMoveLeft()) {
            currentTetromino.moveLeft();
            repaint();
        }
    }

    public void moveTetrominoRight() {
        if (canMoveRight()) {
            currentTetromino.moveRight();
            repaint();
        }
    }

    public void rotateTetromino() {
        if (canRotate()) {
            currentTetromino.rotate();
            repaint();
        }
    }

    public void dropTetromino() {
        while (canMoveDown()) {
            currentTetromino.moveDown();
        }
        placeTetromino();
        clearFullLines();
        generateNewTetromino();
    }

    private void generateNewTetromino() {
        currentTetromino = Tetromino.randomTetromino();
    }

    private void placeTetromino() {
        for (Point p : currentTetromino.getBlocks()) {
            board[p.y][p.x] = 1;
        }
    }

    private void clearFullLines() {
        for (int y = BOARD_HEIGHT - 1; y >= 0; y--) {
            boolean fullLine = true;
            for (int x = 0; x < BOARD_WIDTH; x++) {
                if (board[y][x] == 0) {
                    fullLine = false;
                    break;
                }
            }
            if (fullLine) {
                // Clear the line
                for (int i = y; i > 0; i--) {
                    System.arraycopy(board[i - 1], 0, board[i], 0, BOARD_WIDTH);
                }
                Arrays.fill(board[0], 0);
                repaint();
            }
        }
    }

    private boolean canMoveDown() {
        for (Point p : currentTetromino.getBlocks()) {
            if (p.y + 1 >= BOARD_HEIGHT || board[p.y + 1][p.x] == 1) {
                return false;
            }
        }
        return true;
    }

    private boolean canMoveLeft() {
        for (Point p : currentTetromino.getBlocks()) {
            if (p.x - 1 < 0 || board[p.y][p.x - 1] == 1) {
                return false;
            }
        }
        return true;
    }

    private boolean canMoveRight() {
        for (Point p : currentTetromino.getBlocks()) {
            if (p.x + 1 >= BOARD_WIDTH || board[p.y][p.x + 1] == 1) {
                return false;
            }
        }
        return true;
    }

    private boolean canRotate() {
        for (Point p : currentTetromino.getRotatedBlocks()) {
            if (p.x < 0 || p.x >= BOARD_WIDTH || p.y >= BOARD_HEIGHT || board[p.y][p.x] == 1) {
                return false;
            }
        }
        return true;
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        drawBoard(g);
        drawTetromino(g);
    }

    private void drawBoard(Graphics g) {
        for (int y = 0; y < BOARD_HEIGHT; y++) {
            for (int x = 0; x < BOARD_WIDTH; x++) {
                if (board[y][x] == 1) {
                    g.setColor(Color.BLUE);
                    g.fillRect(x * 30, y * 30, 30, 30);
                    g.setColor(Color.BLACK);
                    g.drawRect(x * 30, y * 30, 30, 30);
                }
            }
        }
    }

    private void drawTetromino(Graphics g) {
        g.setColor(currentTetromino.getColor());
        for (Point p : currentTetromino.getBlocks()) {
            g.fillRect(p.x * 30, p.y * 30, 30, 30);
            g.setColor(Color.BLACK);
            g.drawRect(p.x * 30, p.y * 30, 30, 30);
        }
    }
}

