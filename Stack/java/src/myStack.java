import java.util.Arrays;

public class myStack {
    private int[] items = new int[5];
    private int count;

    public void push(int item) {
        if (count == items.length)
            throw new StackOverflowError();

        items[count++] = item;
    }

    public int pop() {
        if (0 == count)
            throw new IllegalStateException();

        return items[--count];
    }

    public int peek() {
        if (0 == count)
            throw new IllegalStateException();

        return items[count - 1];
    }

    public boolean isEmpty() {
        return 0 == count;
    }

    @Override
    public String toString() {
        var content = Arrays.copyOfRange(items, 0, count);
        return Arrays.toString(content);
    }


}
