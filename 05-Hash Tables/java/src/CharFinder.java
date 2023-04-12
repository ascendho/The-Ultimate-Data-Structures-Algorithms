import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

public class CharFinder {

    public char findFirstNonRepeatingChar(String str) {
        Map<Character, Boolean> map = new HashMap<>();

        var chars = str.toCharArray();
        for (var ch : chars)
            map.put(ch, !map.containsKey(ch));

        for (var ch : chars)
            if (map.get(ch))
                return ch;

        return Character.MIN_VALUE;
    }

    public char findFirstRepeatedChar(String str) {
        Set<Character> set = new HashSet<Character>();

        for (var ch : str.toCharArray()) {
            if (set.contains(ch))
                return ch;

            set.add(ch);
        }

        return Character.MIN_VALUE;
    }

}
