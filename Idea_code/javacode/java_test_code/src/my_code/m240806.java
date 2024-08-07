package my_code;

import java.util.Scanner;

public class m240806 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入三位数:");
        int a = sc.nextInt();
        System.out.println("个位数为:" + a % 10);
        System.out.println("十位数为:" + a / 10 % 10);
        System.out.println("百位数为:" + a / 100);
    }
}
