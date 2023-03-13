import java.util.ArrayList;
import java.util.Vector;

public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();
        Vector<Integer> list_v = new Vector<>();

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
    }

}