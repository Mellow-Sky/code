package my_code.m241114;
import java.io.*;
import java.net.*;
import java.util.concurrent.*;

public class Server {
    public static void main(String[] args) {
        ExecutorService executor = Executors.newFixedThreadPool(3); // 使用线程池处理客户端连接
        try (ServerSocket serverSocket = new ServerSocket(9876)) {
            System.out.println("服务器启动,等待连接...");

            // 接受多个客户端连接
            while (true) {
                Socket clientSocket = serverSocket.accept();
                System.out.println("连接成功");
                executor.submit(new ClientHandler(clientSocket));
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    // 处理每个客户端请求的任务
    static class ClientHandler implements Runnable {
        private Socket clientSocket;

        public ClientHandler(Socket socket) {
            this.clientSocket = socket;
        }

        @Override
        public void run() {
            try (InputStream is = clientSocket.getInputStream();
                 BufferedReader br = new BufferedReader(new InputStreamReader(is));
                 OutputStream os = clientSocket.getOutputStream();
                 PrintWriter pw = new PrintWriter(os, true)) {

                String message;
                while ((message = br.readLine()) != null) {
                    System.out.println("从客户端接收到的消息: " + message + "  消息来自:" + clientSocket.getPort());
                }

            } catch (IOException e) {
                e.printStackTrace();
            } finally {
                try {
                    clientSocket.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}
