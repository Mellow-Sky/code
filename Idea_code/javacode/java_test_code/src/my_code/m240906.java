package my_code;

public class m240906 {
    public static void main(String[] args) {
        Judge judge = new Judge();
        System.out.println("矩形：" + judge.result(new Rectangle(2, 3)));
        System.out.println("矩形：" + judge.result(new Triangle(2, 3)));
        System.out.println("矩形：" + judge.result(new Square(2)));
    }
}
//抽象图形类
abstract class Shape {
    protected double length;
    protected double width;
    public Shape(double length, double width) {
        this.length = length;
        this.width = width;
    }
    public abstract double area();
}
//矩形类继承图形类
class Rectangle extends Shape {
    Rectangle(final double num1, final double num2) {
        super(num1, num2);
    }
    public double area() {
        return length * width;
    }
}
//三角形类继承图形类
class Triangle extends Shape {
    Triangle(final double num1, final double num2) {
        super(num1, num2);
    }
    public double area() {
        return length * width / 2;
    }
}
//正方形类继承图形类
class Square extends Shape {
    Square(final double side) {
        super(side, side);
    }
    public double area() {
        return length * width;
    }
}
//判定类
class Judge {
    public double result(Shape shape) {
        return shape.area();
    }
}