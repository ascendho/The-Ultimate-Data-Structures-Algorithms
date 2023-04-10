import java.util.HashMap;
import java.util.Map;

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

}
