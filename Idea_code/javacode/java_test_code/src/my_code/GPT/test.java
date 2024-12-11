package my_code.GPT;

import javax.swing.*;
import javax.swing.Timer;
import java.awt.*;
import java.awt.event.*;
import java.util.*;

public class test extends JFrame {

    public String path = "..\\LianLianKanGame\\picture\\";
    public String[] imageNames = {"0.jpg", "1.jpg", "2.jpg", "3.jpg", "4.jpg", "5.jpg"};
    private static final int ROWS = 10; // Grid rows
    private static final int COLS = 10; // Grid columns
    private static final int TILE_SIZE = 50; // Size of each tile
    private JButton[][] buttons = new JButton[ROWS][COLS];
    private ArrayList<Point> tiles = new ArrayList<>();
    private Point firstSelected = null;
    private Point secondSelected = null;
    private int score = 0; // To track the number of moves
    private JLabel scoreLabel;

    public test() {
        setTitle("Lianliankan Game");
        setSize(COLS * TILE_SIZE + 200, ROWS * TILE_SIZE + 100); // Adjust size to fit buttons
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(null);

        // Create game board panel
        JPanel gameBoard = new JPanel();
        gameBoard.setLayout(new GridLayout(ROWS, COLS));
        gameBoard.setBounds(0, 0, COLS * TILE_SIZE, ROWS * TILE_SIZE);

        // 初始化button
        initButtons(gameBoard);

        // Scoreboard label
        scoreLabel = new JLabel("Moves: 0");
        scoreLabel.setFont(new Font("Arial", Font.BOLD, 16));
        scoreLabel.setBounds(COLS * TILE_SIZE + 20, 30, 150, 30);
        add(scoreLabel);

        // Exit button
        JButton exitButton = new JButton("Exit");
        exitButton.setBounds(COLS * TILE_SIZE + 20, 70, 150, 40);
        exitButton.addActionListener(e -> System.exit(0));
        add(exitButton);

        // Reopen button
        JButton reopenButton = new JButton("Reopen");
        reopenButton.setBounds(COLS * TILE_SIZE + 20, 120, 150, 40);
        reopenButton.addActionListener(e -> reopenGame());
        add(reopenButton);

        add(gameBoard);
        setVisible(true);

        // Start the game
        randomizeTiles();
        addTileSelectionListener();
    }

    private ImageIcon loadImage(String imageName) {
        return new ImageIcon(getClass().getResource("..\\B2\\lianliankan" + imageName));
    }

    private void initButtons(JPanel gameBoard) {
        //String[] imageNames = {"1.png", "2.png", "3.png", "4.png", "5.png"};
        Random rand = new Random();

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


    private void randomizeTiles() {
        // Clear any previous tiles
        tiles.clear();
        // Create a list of all tile positions
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                tiles.add(new Point(i, j));
            }
        }

        // Randomly place numbers on tiles
        Collections.shuffle(tiles);
        int tileNumber = 1;
        for (Point p : tiles) {
            buttons[p.x][p.y].setText(String.valueOf(tileNumber));
            ImageIcon icon = new ImageIcon(path + imageNames[tileNumber]);
            buttons[p.x][p.y].setIcon(icon);
            buttons[p.x][p.y].setEnabled(true); // Enable the button
            tileNumber = (tileNumber % 5) + 1; // Use 5 different numbers for the tiles
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
        // If no tile is selected, select the first tile
        if (firstSelected == null) {
            firstSelected = new Point(x, y);
            buttons[x][y].setBackground(Color.YELLOW);
        } else if (secondSelected == null) {
            secondSelected = new Point(x, y);
            buttons[x][y].setBackground(Color.YELLOW);

            // Check if the selected tiles match
            if (isMatch(firstSelected, secondSelected)) {
                buttons[firstSelected.x][firstSelected.y].setEnabled(false);
                buttons[secondSelected.x][secondSelected.y].setEnabled(false);
                score++;
                updateScoreboard();
                resetSelection();
            } else {
                // If no match, reset selection
                Timer timer = new Timer(500, e -> resetSelection());
                timer.setRepeats(false);
                timer.start();
            }
        }
    }

    private boolean isMatch(Point p1, Point p2) {
        // Check if the numbers match (you can customize matching logic here)
        return buttons[p1.x][p1.y].getText().equals(buttons[p2.x][p2.y].getText());
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

    private void updateScoreboard() {
        scoreLabel.setText("Moves: " + score);
    }

    private void reopenGame() {
        score = 0;
        updateScoreboard();
        randomizeTiles();
        resetSelection();
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> new test());
    }
}
