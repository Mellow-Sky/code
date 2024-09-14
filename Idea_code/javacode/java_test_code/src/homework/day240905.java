//package homework;
//
//public class day240905 {
//    public static void main(String[] args) {
//        Student s = new Student();
//        s.setPerson(18, "www", "23034225");
//        s.show();
//        s.getStudy();
//    }
//}
////人类：年龄，姓名，吃饭，喝水
//class Person {
//    public int age;
//    public String name;
//    public void setPerson(int age, String name) {
//        this.age = age;
//        this.name = name;
//    }
//    public void getEat() {
//        System.out.println("在吃饭");
//    }
//    public void getWarter() {
//        System.out.println("在喝水");
//    }
//    public void show() {
//        System.out.println("年龄:" + age + "\t姓名:" + name);
//    }
//}
////学生类继承人类:学号,学习
//class Student extends Person {
//    public String number;
//    public void setPerson(int age, String name, String number) {
//        this.age = age;
//        this.name = name;
//        this.number = number;
//    }
//    public void getStudy() {
//        System.out.println("在学习");
//    }
//    public void show() {
//        super.show();
//        System.out.println("学号:" + number);
//    }
//}