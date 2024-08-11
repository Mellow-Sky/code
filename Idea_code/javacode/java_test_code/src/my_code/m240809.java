package my_code;

import java.util.Random;
import java.util.Scanner;

public class m240809 {
    public static void main(String[] args) {
        
    }







    // 数字加密
    public static void test5() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[len(n)];
        int temp;
        for (int i = 0; i < arr.length; i++) {
            arr[i] = n % 10;
            arr[i] = (arr[i] + 5) % 10;
            n /= 10;
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]);
        }
    }
    public static int len(int n) {
        int w = 0;
        while(n != 0){
            n /= 10;
            w++;
        }
        return w;
    }












    // 分数录入并求平均值
    public static void test4() {
        Random random = new Random();
        int[] arr = new int[6];
        for(int i = 0; i < 6; i++) {
            int seed = random.nextInt(101);
            arr[i] = seed;
        }
        int sum = arr[0], max = arr[0], min = arr[0];
        for (int i = 1; i < arr.length; i++) {
            sum += arr[i];
            if(max < arr[i]) {
                max = arr[i];
            }
            if(min > arr[i]) {
                min = arr[i];
            }
        }
        System.out.println((sum - max - min) / 4);
    }










    // 前四个为字母，最后一位为数字的随机验证码
    public static void test3() {
        Random random = new Random();
        String str = "";
        for(int i = 0; i < 4; i++){
            int seed0 = random.nextInt(100) + 1;
            int seed;
            if(seed0 % 2 == 0) {
                seed = random.nextInt(26) + 65;
            } else {
                seed = random.nextInt(26) + 97;
            }
            str += (char)seed;
        }
        int number = random.nextInt(10);
        System.out.println(str + number);
    }






    // 求素数个数
    public static void test2() {
        int num = 0;
        for(int i = 101; i <= 200; i++){
            if(su(i)) {
                num++;
            }
        }
        System.out.println(num);
    }
    public static boolean su(int x) {
        for(int i = 2; i <= Math.sqrt(x); i++){
            if(x % i == 0) {
                return false;
            }
        }
        return true;
    }



    // 价格 月份 优惠
    public static void test1() {
        Scanner sc = new Scanner(System.in);
        double price = sc.nextDouble();
        int month = sc.nextInt();
        String n = sc.next();
        if (month >= 5 && month <= 10) {
            if (n == "头等舱") {
                System.out.println(price * 0.9);
            } else if (n == "经济舱"){
                System.out.println(price * 0.85);
            } else {
                System.out.println("输入错误");
            }
        } else if ((month >= 11 && month <= 12) || (month >= 1 && month <= 4)) {
            if (n == "头等舱") {
                System.out.println(price * 0.7);
            } else if (n == "经济舱"){
                System.out.println(price * 0.65);
            } else {
                System.out.println("输入错误");
            }
        }
    }
}
