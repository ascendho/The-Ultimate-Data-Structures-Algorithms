import java.util.ArrayList;
import java.util.Vector;

public class Main {
    public static void main(String[] args) {

//        Built-in Array
        ArrayList<Integer> list = new ArrayList<>();
        Vector<Integer> list_v = new Vector<>();

//        Custom Array
        System.out.println("Custom Array");

        Array numbers = new Array(3);
        numbers.insert(-1);
        numbers.insert(0);
        numbers.insert(1);
        numbers.insert(10);
        numbers.insert(20);
        numbers.insert(30);
        numbers.insert(40);
        numbers.print();
        numbers.removeAt(6);
        numbers.print();

        System.out.println("--------");

    }

}