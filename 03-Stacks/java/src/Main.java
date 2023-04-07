import java.awt.*;
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
       /* String input = "[{3*(2-3)}]()";
        Expression exp = new Expression(input);
        System.out.println(exp.isBalanced()); */

//        My Stack
      /*  myStack st = new myStack();

        st.push(30);
        st.push(10);
        st.push(40);
        st.push(90);
        st.pop();

        System.out.println(st.peek());*/

//        TwoStacks
        System.out.println("TwoStacks");

        TwoStacks twoStacks = new TwoStacks(4);

        twoStacks.push1(4);
        twoStacks.push1(8);
        twoStacks.push2(44);
        twoStacks.push2(54);

        System.out.println(twoStacks);
        twoStacks.pop1();
        twoStacks.pop2();
        System.out.println(twoStacks);

        System.out.println("--------");

//        MinStack
        System.out.println("MinStack");

        MinStack test = new MinStack();

        test.push(5);
        test.push(2);
        test.push(10);
        test.push(1);


        System.out.println(test.min());
        test.pop();
        System.out.println(test.min());

        System.out.println("--------");
        

    }
}