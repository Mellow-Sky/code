package my_code.Tetris;

import java.awt.*;
import java.util.List;
import java.util.*;

public class Tetromino {
    private List<Point> blocks;
    private Color color;

    // 可能的方块形状（以相对坐标表示）
    private static final Point[][] SHAPES = {
            // I形
            {new Point(0,0), new Point(1,0), new Point(2,0), new Point(3,0)},
            // O形
            {new Point(0,0), new Point(0,1), new Point(1,0), new Point(1,1)},
            // T形
            {new Point(0,0), new Point(1,0), new Point(2,0), new Point(1,1)},
            // L形
            {new Point(0,0), new Point(1,0), new Point(2,0), new Point(2,1)},
            // J形
            {new Point(0,0), new Point(1,0), new Point(2,0), new Point(0,1)},
            // S形
            {new Point(1,0), new Point(2,0), new Point(0,1), new Point(1,1)},
            // Z形
            {new Point(0,0), new Point(1,0), new Point(1,1), new Point(2,1)}
    };


    public Tetromino(Point[] shape, Color color) {
        this.blocks = new ArrayList<>(Arrays.asList(shape)); // 使用 Arrays.asList 将 Point[] 转为 List<Point>
        this.color = color;
    }


    public static Tetromino randomTetromino() {
        Random rand = new Random();
        int index = rand.nextInt(SHAPES.length);
        Point[] shape = SHAPES[index];
        Color color = new Color(rand.nextFloat(), rand.nextFloat(), rand.nextFloat());
        return new Tetromino(shape, color);
    }

    public List<Point> getBlocks() {
        return blocks;
    }

    public Color getColor() {
        return color;
    }

    public List<Point> getRotatedBlocks() {
        List<Point> rotated = new ArrayList<>();
        for (Point p : blocks) {
            rotated.add(new Point(-p.y, p.x)); // 90度旋转
        }
        return rotated;
    }

    public void moveDown() {
        for (int i = 0; i < blocks.size(); i++) {
            blocks.set(i, new Point(blocks.get(i).x, blocks.get(i).y + 1));
        }
    }

    public void moveLeft() {
        for (int i = 0; i < blocks.size(); i++) {
            blocks.set(i, new Point(blocks.get(i).x - 1, blocks.get(i).y));
        }
    }

    public void moveRight() {
        for (int i = 0; i < blocks.size(); i++) {
            blocks.set(i, new Point(blocks.get(i).x + 1, blocks.get(i).y));
        }
    }

    public void rotate() {
        blocks = getRotatedBlocks();
    }
}
