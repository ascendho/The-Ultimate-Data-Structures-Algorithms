import java.util.ArrayDeque;
import java.util.PriorityQueue;
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
        System.out.println("built-in ArrayDeque");

        Queue<Integer> queue = new ArrayDeque<>();
        queue.add(10);
        queue.add(20);
        queue.add(30);

        var front = queue.remove();
        System.out.println(front);
        System.out.println(queue);

        System.out.println("--------");

//        reverse
        System.out.println("reverse");

        reverse(queue);
        System.out.println(queue);

        System.out.println("--------");

//        custom ArrayQueue
        System.out.println("custom ArrayQueue");

        ArrayQueue arrayQueue = new ArrayQueue(5);
        arrayQueue.enqueue(5);
        arrayQueue.enqueue(6);
        arrayQueue.enqueue(7);
        arrayQueue.enqueue(8);
        arrayQueue.enqueue(9);
        System.out.println(arrayQueue);
        arrayQueue.dequeue();
        System.out.println(arrayQueue);
        arrayQueue.enqueue(10);
        System.out.println(arrayQueue);

        System.out.println("--------");

//        QueueWithTwoStacks
        System.out.println("QueueWithTwoStacks");

        QueueWithTwoStacks queueWithTwoStacks = new QueueWithTwoStacks();
        queueWithTwoStacks.enqueue(10);
        queueWithTwoStacks.enqueue(20);
        queueWithTwoStacks.enqueue(30);
        System.out.println(queueWithTwoStacks.dequeue());
        System.out.println(queueWithTwoStacks.dequeue());
        System.out.println(queueWithTwoStacks.peek());

        System.out.println("--------");

//        built-in priority queue
        System.out.println("built-in priority");
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<>();
        priorityQueue.add(5);
        priorityQueue.add(1);
        priorityQueue.add(3);
        priorityQueue.add(2);
        while (!priorityQueue.isEmpty())
            System.out.println(priorityQueue.remove());

        System.out.println("--------");

//        custom priority queue
        System.out.println("custom priority queue");
        MyPriorityQueue myPriorityQueue = new MyPriorityQueue(5);
        myPriorityQueue.add(3);
        myPriorityQueue.add(7);
        myPriorityQueue.add(5);
        myPriorityQueue.add(1);
        myPriorityQueue.add(4);
        System.out.println(myPriorityQueue);

        while (!myPriorityQueue.isEmpty())
            System.out.println(myPriorityQueue.remove());

        System.out.println("--------");


    }

}