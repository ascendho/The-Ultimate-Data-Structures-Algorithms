import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

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

//        findFirstNonRepeatingChar
        System.out.println("findFirstNonRepeatingChar");

        CharFinder charFinder = new CharFinder();
        System.out.println(charFinder.findFirstNonRepeatingChar("A Green Apple"));
        System.out.println(charFinder.findFirstNonRepeatingChar("An Apple is Green"));

        System.out.println("--------");

//        Built-in HashSet
        System.out.println("Built-in HashSet");

        Set<Integer> set = new HashSet<>();

        int[] numbers = {1, 2, 3, 3, 2, 1, 4};
        for (var number : numbers)
            set.add(number);
        System.out.println(set);

        System.out.println("--------");

//        findFirstRepeatedChar
        System.out.println("findFirstRepeatedChar");

        System.out.println(charFinder.findFirstRepeatedChar("green apple"));
        System.out.println(charFinder.findFirstRepeatedChar("An Apple is Green"));

        System.out.println("--------");

    }
}