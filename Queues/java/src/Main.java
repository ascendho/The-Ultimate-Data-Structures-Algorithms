import java.util.ArrayDeque;
import java.util.Queue;
import java.util.Stack;

public class Main {
    public static void reverse(Queue<Integer> queue) {
        Stack<Integer> stack = new Stack<>();
        while (!queue.isEmpty())
            stack.push(queue.remove());
        while (!stack.isEmpty())
            queue.add(stack.pop());
    }


    public static void main(String[] args) {
//        built-in ArrayDeque

        Queue<Integer> queue = new ArrayDeque<>();
        queue.add(10);
        queue.add(20);
        queue.add(30);

        var front = queue.remove();
        System.out.println(front);
        System.out.println(queue);

//        reverse
        reverse(queue);
        System.out.println(queue);

//        custom queue
   


    }

}