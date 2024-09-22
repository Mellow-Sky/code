package homework.m5_4;

public class m5_4_1{
    public static void main(String[] args) {
        myThread t = new myThread();
        System.out.println("使用继承Thread类打印1-1000的奇数");
        t.start();
    }
}
class myThread extends Thread {
    public synchronized void run() {
        for(int i = 1; i <= 1000; i++) {
            if(i % 2 == 1) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }
}

