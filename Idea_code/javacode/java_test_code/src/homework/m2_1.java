package homework;

/**
 * 计算1-50所有偶数的和
 */
public class m2_1 {
    public static void main(String[] args){
        int sum = 0;
        for(int i = 2; i <=50; i+=2) {
                sum += i;
        }
        System.out.println(sum);
    }
}
