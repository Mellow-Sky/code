package my_code.m241207;

import java.util.Scanner;


public class m241207 {
    public static void main(String[] args) {
        int t;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        while (t > 0) {
            t -= 1;
            int n, k;
            n = sc.nextInt();
            k = sc.nextInt();
            if (k > (2 * n - 2) * 2) {
                System.out.println(k - ((2 * n - 2) * 2) + (2 * n - 2));
            } else {
                System.out.println((k + 1) / 2);
            }
        }
    }
}
