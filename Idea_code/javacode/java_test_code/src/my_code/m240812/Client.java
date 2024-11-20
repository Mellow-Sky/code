package my_code.m240812;
import java.io.*;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.Scanner;
public class Client {
public static void main(String[] args) throws UnknownHostException, IOException {
	Socket socket=new Socket("127.0.0.1",8888);
	//创建一个独立的线程，负责随时从socket中接受服务端发送过来的消息
	new clientthread(socket).start();
	
	OutputStream os=socket.getOutputStream();
	DataOutputStream ds=new DataOutputStream(os);
	Scanner sc=new Scanner(System.in);
	while(true)
	{
		System.out.println("请说：");
		String msg=sc.nextLine();//接收用户输入的一行消息
		if("exit".equals(msg))
		{
			System.out.println("退出成功");
			ds.close();
			socket.close();
			break;
		}
	   ds.writeUTF(msg);

	   ds.flush();//把数据刷新，防止还在客户端的内存中
	}
	}
}
class clientthread extends Thread
{
	private Socket socket;
	public clientthread(Socket socket)
	{
		this.socket=socket;
	}
	public void run() {
		// TODO Auto-generated method stub
		try {
			InputStream is = socket.getInputStream();;
			DataInputStream dis=new DataInputStream(is);
		
			while(true)
			{
				try {
					String s=dis.readUTF();
				System.out.println(s);
				//把信息分发给全部客户端进行接收
				}catch(Exception e)
				{
					//出异常表示离线
					System.out.println("自己下线了");
					Server.onLineSockets.remove(socket);
					socket.close();
					dis.close();
					break;
				}
		}
		} catch (IOException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		}
		
  }
	private void sendMsgToAll(String msg) throws IOException
	{
		for(Socket onLineSockets:Server.onLineSockets)
		{
			OutputStream os=onLineSockets.getOutputStream();
			DataOutputStream dos=new DataOutputStream(os);
			dos.writeUTF(msg);
			dos.flush();
		}
	}

}
