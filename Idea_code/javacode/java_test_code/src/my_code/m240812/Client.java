package my_code.m240812;
import java.io.*;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.Scanner;
public class Client {
public static void main(String[] args) throws UnknownHostException, IOException {
	Socket socket=new Socket("127.0.0.1",8888);
	//����һ���������̣߳�������ʱ��socket�н��ܷ���˷��͹�������Ϣ
	new clientthread(socket).start();
	
	OutputStream os=socket.getOutputStream();
	DataOutputStream ds=new DataOutputStream(os);
	Scanner sc=new Scanner(System.in);
	while(true)
	{
		System.out.println("��˵��");
		String msg=sc.nextLine();//�����û������һ����Ϣ
		if("exit".equals(msg))
		{
			System.out.println("�˳��ɹ�");
			ds.close();
			socket.close();
			break;
		}
	   ds.writeUTF(msg);

	   ds.flush();//������ˢ�£���ֹ���ڿͻ��˵��ڴ���
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
				//����Ϣ�ַ���ȫ���ͻ��˽��н���
				}catch(Exception e)
				{
					//���쳣��ʾ����
					System.out.println("�Լ�������");
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
