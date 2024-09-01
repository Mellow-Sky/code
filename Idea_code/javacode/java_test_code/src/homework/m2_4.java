package homework;

/**
 * 求1到1000的和
 * 并求什么时候的和大于500
 */
public class m2_4 {
    public static void main(String[] args) {
        int sum = 0;
        boolean b = true;
        for(int i = 1; i <= 1000; i++) {
            sum += i;
            if(b && sum > 500) {
                b = false;
                System.out.println("当加到" + i + "的时候，和大于500");
            }
        }
        System.out.println(sum);
    }
}
