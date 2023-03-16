import java.util.Arrays;
//import java.util.LinkedList;

public class Main {
    public static void main(String[] args) {
        // built-in linked-list
//        LinkedList list = new LinkedList();
//        list.addLast(10);
//        list.addLast(20);
//        list.addLast(30);
//        System.out.println(list.contains(10));
//        System.out.println(list.indexOf(10));
//        System.out.println(list.size());
//
//        var array = list.toArray();
//        System.out.println(Arrays.toString(array));
        var list = new LinkedList();
        list.addLast(10);
        list.addLast(20);
        list.addLast(30);
        list.addFirst(-1);

//        list.removeLast();

//        System.out.println(list.indexOf(-1));
//        System.out.println(list.contains(-1));

        list.reverse();

        var array = list.toArray();
        System.out.println(Arrays.toString(array));


    }
}