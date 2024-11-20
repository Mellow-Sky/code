package my_code.m241114;
import java.io.*;
import java.net.*;
import java.util.Scanner;

public class client {
    public static void main(String[] args) {
            new Thread(new SenderTask()).start();
    }

    static class SenderTask implements Runnable {

        @Override
        public void run() {
            try (Socket socket = new Socket("172.20.10.3", 9876)) {
                OutputStream os = socket.getOutputStream();
                PrintWriter pw = new PrintWriter(os, true);

                // 发送数据
                Scanner scanner = new Scanner(System.in);
                while (true) {
                    String message = scanner.nextLine();
                    if (message.equals("exit")) {
                        break;
                    }
                    pw.println(message);
                    System.out.println("发送了: " + message);
                }

                // 向服务器发送完毕后等待响应
                InputStream is = socket.getInputStream();
                BufferedReader br = new BufferedReader(new InputStreamReader(is));
                String response = br.readLine();
                System.out.println("回复: " + response);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }
}

