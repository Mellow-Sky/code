package my_code;
import java.io.*;
import java.net.*;
public class m241108 {
    public static void main(String[] args) {
        try {
            URL cs = new URL("https://huoshen80.top");
            File file = new File("E:\\TEST.txt");
            BufferedReader in = new BufferedReader(new InputStreamReader(cs.openStream()));
            BufferedWriter wt = new BufferedWriter(new FileWriter(file));
            String s;
            while ((s = in.readLine()) != null) {
                wt.write(s);
                wt.newLine();
            }
        } catch (Exception e) {

        }











//        try
//        {
//            URL url = new URL("http://www.runoob.com/index.html?language=cn#j2se");
//            System.out.println("URL 为：" + url.toString());
//            System.out.println("协议为：" + url.getProtocol());
//            System.out.println("验证信息：" + url.getAuthority());
//            System.out.println("文件名及请求参数：" + url.getFile());
//            System.out.println("主机名：" + url.getHost());
//            System.out.println("路径：" + url.getPath());
//            System.out.println("端口：" + url.getPort());
//            System.out.println("默认端口：" + url.getDefaultPort());
//            System.out.println("请求参数：" + url.getQuery());
//            System.out.println("定位位置：" + url.getRef());
//        }catch(IOException e)
//        {
//            e.printStackTrace();
//        }



//        String serverAddress = "www.mellowsky.com";
//        int port = 80;
//
//        try  {
//            // 向服务器发送消息
//            Socket socket = new Socket(serverAddress, port);
//            OutputStream output = socket.getOutputStream();
//            PrintWriter writer = new PrintWriter(output, true);
//            writer.println("Hello, Server!");
//
//            // 接收服务器响应
//            BufferedReader reader = new BufferedReader(new InputStreamReader(socket.getInputStream()));
//            String response = reader.readLine();
//            System.out.println("Received from server: " + response);
//        } catch (Exception e) {
//            //e.printStackTrace();
//        }
    }
}

