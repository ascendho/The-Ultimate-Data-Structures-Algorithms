import java.util.Stack;

public class Main {
    public static void main(String[] args) {
//        Stack<Character> stack = new Stack<>();

//        stack.push(10);
//        stack.push(20);
//        stack.push(30);
//
//        System.out.println(stack);
//        var top = stack.pop();
//        System.out.println(top);
//
//        top = stack.peek();
//        System.out.println(stack);
//        System.out.println(top);

//        Reversing a String
//        String str = "abcd";
//
//        StringReverser reverser = new StringReverser();
//        System.out.println(reverser.reverse(str));

//        Balanced expression
        String input = "[{3*(2-3)}]()";
        Expression exp = new Expression(input);
        System.out.println(exp.isBalanced());

//        My Stack
        myStack st = new myStack();
        st.push(30);
        st.push(10);
        st.push(40);
        st.push(90);
        st.pop();

        System.out.println(st.peek());

    }
}