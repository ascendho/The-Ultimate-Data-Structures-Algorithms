import java.util.HashMap;
import java.util.Map;

public class Main {
    public static void main(String[] args) {
//        Built-in HashMap
        System.out.println("Built-in HashMap");

        Map<Integer, String> map = new HashMap<>();
        map.put(1, "Mosh");
        map.put(2, "John");
        map.put(3, "Mary");

//        overwrite the duplicate key
        map.put(3, "Marianne");

//        null values is allowed
        map.put(4, null);

//        null key is also allowed
        map.put(null, null);

        System.out.println(map);

        System.out.println(map.containsKey(3));          //O(1)
        System.out.println(map.containsValue("Mosh"));   //O(n)

        for (var item : map.entrySet())
            System.out.println(item);

        System.out.println("--------");


    }
}