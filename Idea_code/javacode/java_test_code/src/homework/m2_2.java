package homework;

import java.util.Scanner;

/**
 * 打印图形
 *          *
 *         * *
 *        * * *
 *       * * * *
 */

public class m2_2 {
    public static void main(String[] args) {
        int n = 4;
        int m = n + (n - 1);
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i + m; j++) {
                if(j <= m - i) {
                    System.out.print(" ");
                }
            }
            for(int k = 0; k < i; k++) {
                System.out.print(" * ");
            }
            System.out.println();
         }
    }
}
