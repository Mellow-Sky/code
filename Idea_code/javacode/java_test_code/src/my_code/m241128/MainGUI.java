package my_code.m241128;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.ResultSet;
import java.sql.SQLException;

public class MainGUI {

    private static final DBconnect DB;

    static {
        try {
            DB = new DBconnect();
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }

    private JFrame frame = new JFrame("main");
    private JMenuBar menuBar = new JMenuBar();
    private JButton delete = new JButton("delete");
    private JMenu select = new JMenu("select");
    private JMenuItem name = new JMenuItem("name");
    private JMenuItem age = new JMenuItem("age");
    private JMenuItem score = new JMenuItem("score");
    private JMenuItem all = new JMenuItem("all");
    private JMenuItem intoSeletGUI = new JMenuItem("intoSeletGUI");



    String queryname = "SELECT name FROM user";
    String queryage = "SELECT age FROM user";
    String queryscore = "SELECT score FROM user";
    String queryall = "SELECT * FROM user";
    private JTextArea textField = new JTextArea(20, 20);
    public MainGUI() throws SQLException {
        select.add(name);
        select.add(age);
        select.add(score);
        select.add(all);
        select.add(intoSeletGUI);
        menuBar.add(select);
        menuBar.add(delete);
        frame.setJMenuBar(menuBar);
        frame.add(textField);
        name.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                try {
                    ResultSet resultSet = DB.run(queryname);
                    while (resultSet.next()) {
                        textField.append("name:" + resultSet.getString(1) + '\n');
                    }
                } catch (SQLException ex) {
                    throw new RuntimeException(ex);
                }
            }
        });
        age.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                try {
                    ResultSet resultSet = DB.run(queryage);
                    while (resultSet.next()) {
                        textField.append("age:" + resultSet.getString(1) + '\n');
                    }
                    //textField.append(DB.run(queryage) + '\n');
                } catch (SQLException ex) {
                    throw new RuntimeException(ex);
                }
            }
        });
        score.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                try {
                    ResultSet resultSet = DB.run(queryscore);
                    while (resultSet.next()) {
                        textField.append("score:" + resultSet.getString(1) + '\n');
                    }
                    //textField.append(DB.run(queryscore, "score" + '\n') + '\n');
                } catch (SQLException ex) {
                    throw new RuntimeException(ex);
                }
            }
        });
        all.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                try {
                    ResultSet resultSet = DB.run(queryall);
                    while (resultSet.next()) {
                        textField.append("id:" + resultSet.getString(1) + " age:" + resultSet.getString(2) +" name:"
                                + resultSet.getString(3) +" score:" + resultSet.getString(4) +'\n');
                    }
                } catch (SQLException ex) {
                    throw new RuntimeException(ex);
                }
            }
        });
        delete.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textField.setText("");
            }
        });
        intoSeletGUI.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                try {
                    frame.setVisible(false);
                    DB.disconnection();
                    new SelectGUI();
                } catch (SQLException sq) {
                    sq.getSQLState();
                }

            }
        });
        frame.setSize(270, 150);
        frame.setVisible(true);
    }

}
