package my_code;

import java.util.Scanner;

public class m240905 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请设置用户名:");
        String user = sc.next();
        System.out.println("请设置密码:");
        String password = sc.next();
        boolean b = false;
        for(int i = 0; i < 3; i++) {
            System.out.println("请输入用户名:");
            String myuser = sc.next();
            System.out.println("请输入密码:");
            String mypassword = sc.next();
            if(user.equals(myuser) && password.equals(mypassword)) {
                System.out.println("登入成功!");
                b = true;
                break;
            }
            System.out.println("用户名或密码错误！");
        }
        if(!b) {
            System.out.println("三次输入失败，即将销毁系统");
        }
    }
}


//public static void main(String[] args) {
//    Scanner sc = new Scanner(System.in);
//    double d = sc.nextDouble();
//    System.out.println(d);
//}