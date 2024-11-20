package my_code.m240812;
import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.ArrayList;
import java.util.List;
class serverthread extends Thread
{
	private Socket socket;
	public serverthread(Socket socket)
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
				//????????????????????§ß???
				}catch(Exception e)
				{
					//???????????
					System.out.println("??????????");
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
		////????????????????????§ß???
		for(Socket onLineSockets:Server.onLineSockets)
		{
			OutputStream os=onLineSockets.getOutputStream();
			DataOutputStream dos=new DataOutputStream(os);
			dos.writeUTF(msg);
			dos.flush();
		}
	}
}
public class Server {
	public static List<Socket> onLineSockets=new ArrayList<>();
    public static void main(String[] args) throws UnknownHostException, IOException {
	ServerSocket serversocket=new ServerSocket(8888);
	while(true)
	{
	   Socket socket=serversocket.accept();
	   onLineSockets.add(socket);
	   System.out.println("??????????"+socket.getRemoteSocketAddress());
	   //??????????????socket??????????????????????????
	   new serverthread(socket).start();
	InputStream is=socket.getInputStream();
	DataInputStream di=new DataInputStream(is);
	}
}
}
