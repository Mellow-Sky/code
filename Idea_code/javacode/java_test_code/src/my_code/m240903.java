//package my_code;
//
//import java.util.Random;
//
//public class m240903 {
//    public static void main(String[] args) {
//        game one = new game("张三", 100);
//        game two = new game("李四", 100);
//        while(true) {
//            one.attact(two);
//            if(two.blood == 0) {
//                System.out.println(two.name + "血量为0");
//                break;
//            }
//            two.attact(one);
//            if(one.blood == 0) {
//                System.out.println(one.name + "血量为0");
//                break;
//            }
//        }
//    }
//}
//
//class game{
//    public String name;
//    public int blood;
//    public game() {
//        name = "NULL";
//        blood = 0;
//    }
//    public game(String name, int blood) {
//        this.name = name;
//        this.blood = blood;
//    }
//    public void setName(String name) {
//        this.name = name;
//    }
//    public void setBlood(int blood) {
//        this.blood = blood;
//    }
//    public void attact(game gamer) {
//        Random r = new Random();
//        int num = r.nextInt(20) + 1;
//        gamer.blood -= num;
//        gamer.blood = gamer.blood < 0 ? 0 : gamer.blood;
//        System.out.println(this.name + "举起拳头,打了" + gamer.name + "一下," + "造成了" +
//                num + "点伤害," + gamer.name + "还剩下" + gamer.blood + "血.");
//    }
//}
