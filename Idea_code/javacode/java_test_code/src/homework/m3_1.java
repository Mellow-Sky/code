//package homework;
//
//public class m3_1 {
//    public static void main(String[] args) {
//        Student my = new Student(23034225, "吴启立", 19, 100, 100, 100);
//        System.out.println("平均分为:" + my.average());
//        my.output();
//    }
//}
//class Student {
//    int number;
//    String name;
//    int age;
//    double chinese;
//    double math;
//    double english;
//    public Student(int number, String name, int age, double chinese, double math, double english) {
//        this.number = number;
//        this.name = name;
//        this.age = age;
//        this.chinese = chinese;
//        this.math = math;
//        this.english = english;
//    }
//    public void output() {
//        System.out.println("学号:" + number + " 姓名:" + name + " 年龄" + age);
//        System.out.println("语文:" + chinese + " 数学:" + math + " 英语:" + english);
//    }
//    public double average() {
//        return (chinese + math + english) / 3;
//    }
//}
