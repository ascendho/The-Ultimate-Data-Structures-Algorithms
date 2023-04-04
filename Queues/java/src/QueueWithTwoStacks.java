import java.util.Stack;

public class QueueWithTwoStacks {
    private final Stack<Integer> inputStack = new Stack<>();
    private final Stack<Integer> outputStack = new Stack<>();

    // O(1)
    public void enqueue(int item) {
        inputStack.push(item);
    }

    // O(n)
    public int dequeue() {
        moveStack1toStack2();

        return outputStack.pop();
    }

    private void moveStack1toStack2() {
        if (isEmpty())
            throw new IllegalStateException();

        if (outputStack.isEmpty())
            while (!inputStack.isEmpty())
                outputStack.push(inputStack.pop());
    }

    public boolean isEmpty() {
        return inputStack.isEmpty() && outputStack.isEmpty();
    }

    public int peek() {
        moveStack1toStack2();
        return outputStack.peek();
    }


}
