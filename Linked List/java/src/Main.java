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
        // [-1,10,20,30]

        list.removeLast();
        // [-1,10,20]

        System.out.println(list.indexOf(-1));
        // 0

        System.out.println(list.contains(-1));
        // true

        list.reverse();
        // [20,10,-1]

        var array = list.toArray();
        System.out.println(Arrays.toString(array));


        var node = list.getKthNodeFromTheEnd(3);
        int val = list.getKthFromTheEnd(3);

        var listWithLoop = LinkedList.createWithLoop();
        System.out.println(listWithLoop.hasLoop());
        listWithLoop.printMiddle();


    }
}