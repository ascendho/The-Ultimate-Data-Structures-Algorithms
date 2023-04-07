import java.util.Stack;

public class StringReverser {
    public String reverse(String input) {
//        Edge case test
        if (input == null)
            throw new IllegalArgumentException();

        Stack<Character> stack = new Stack<>();

        for (char ch : input.toCharArray())
            stack.push(ch);

        StringBuffer reversed = new StringBuffer();

        while (!stack.empty())
            reversed.append(stack.pop());

        return reversed.toString();
    }

}
