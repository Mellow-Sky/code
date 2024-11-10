package homework.day241110;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.net.*;
import java.util.*;
import java.util.concurrent.*;
public class LocalChatApp {
    private static final int PORT = 12345;

    public static void main(String[] args) {
        // 启动服务器线程
        new Thread(LocalChatApp::startServer).start();

        // 启动两个客户端
        SwingUtilities.invokeLater(() -> new ChatClientWindow("客户端1").start());
        SwingUtilities.invokeLater(() -> new ChatClientWindow("客户端2").start());
    }

    private static void startServer() {
        try (ServerSocket serverSocket = new ServerSocket(PORT)) {
            while (true) {
                Socket clientSocket = serverSocket.accept();
                new ClientHandler(clientSocket).start();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private static class ClientHandler extends Thread {
        private Socket socket;
        private PrintWriter out;
        private static final Set<PrintWriter> clientWriters = ConcurrentHashMap.newKeySet();

        public ClientHandler(Socket socket) {
            this.socket = socket;
        }

        public void run() {
            try {
                out = new PrintWriter(socket.getOutputStream(), true);
                clientWriters.add(out);
                BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));

                String message;
                while ((message = in.readLine()) != null) {
                    broadcastMessage(message);
                }
            } catch (IOException e) {
                e.printStackTrace();
            } finally {
                clientWriters.remove(out);
                try {
                    socket.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }

        private void broadcastMessage(String message) {
            for (PrintWriter writer : clientWriters) {
                writer.println(message);
            }
        }
    }

    private static class ChatClientWindow {
        private JFrame frame;
        private JTextArea messageArea;
        private JTextField inputField;
        private PrintWriter out;

        public ChatClientWindow(String title) {
            frame = new JFrame(title);
            messageArea = new JTextArea(20, 40);
            inputField = new JTextField(30);
            JButton sendButton = new JButton("确定");
            JButton cancelButton = new JButton("取消");

            messageArea.setEditable(false);

            // 设置面板布局
            JPanel panel = new JPanel(new BorderLayout());
            JPanel buttonPanel = new JPanel();
            buttonPanel.add(sendButton);
            buttonPanel.add(cancelButton);

            panel.add(inputField, BorderLayout.CENTER);
            panel.add(buttonPanel, BorderLayout.EAST);

            frame.add(new JScrollPane(messageArea), BorderLayout.CENTER);
            frame.add(panel, BorderLayout.SOUTH);

            frame.pack();
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

            // 发送消息的监听
            sendButton.addActionListener(e -> sendMessage(title + ": " + inputField.getText()));

            // “取消”按钮关闭窗口
            cancelButton.addActionListener(e -> frame.dispose());

            // Enter 键发送消息
            inputField.addActionListener(e -> sendMessage(title + ": " + inputField.getText()));
        }

        public void start() {
            frame.setVisible(true);
            connectToServer();
        }

        private void connectToServer() {
            try {
                Socket socket = new Socket("localhost", PORT);
                out = new PrintWriter(socket.getOutputStream(), true);
                new MessageReceiver(socket).start();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }

        private void sendMessage(String message) {
            if (out != null && !message.trim().isEmpty()) {
                out.println(message);
                inputField.setText("");
            }
        }

        private class MessageReceiver extends Thread {
            private Socket socket;

            public MessageReceiver(Socket socket) {
                this.socket = socket;
            }

            public void run() {
                try (BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()))) {
                    String message;
                    while ((message = in.readLine()) != null) {
                        messageArea.append(message + "\n");
                    }
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}
