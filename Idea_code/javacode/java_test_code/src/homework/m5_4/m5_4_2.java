package homework.m5_4;

public class m5_4_2 {
    public static void main(String[] args) {
        System.out.println("使用实现Runnable接口打印1-1000的偶数");
        Thread t1 = new Thread(new myRunnable());
        t1.start();
    }
}
class myRunnable implements Runnable {
    public myRunnable(){}

    public synchronized void run() {
        for(int i = 1; i <= 1000; i++) {
            if(i % 2 == 0) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }
}