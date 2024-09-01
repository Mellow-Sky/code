package my_code;

public class m240901 {
    public static void main(String[] args) {
        boolean a = false;
        boolean b = true;
        boolean c = (a & b) && (!b);
        int result = b == false?1:2;
        System.out.println(c);
        System.out.println(result);
    }
}
