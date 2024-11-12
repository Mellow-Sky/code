package my_code;

import java.io.*;

public class m241111 {
    public static void main(String[] args) {
        System.out.println("请输入一行字符，按回车键结束:"); // 控制台输出提示语句

        try (BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
             FileOutputStream fos = new FileOutputStream(new File("E:\\file.txt"), true);
             OutputStreamWriter osw = new OutputStreamWriter(fos, "UTF-8")) {

            String input = reader.readLine(); // 读取用户输入的整行字符
            osw.write(input); // 将字符串写入文件
            osw.flush(); // 刷新缓冲区，确保所有数据写入文件

        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            System.out.println("程序执行完毕！！");
        }
    }
}
