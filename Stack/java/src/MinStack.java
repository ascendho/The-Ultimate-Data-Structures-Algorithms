public class MinStack {
    private int[] items = new int[5];
    private int count;
    private int min;

    public int pop() {
        if (0 == count)
            throw new IllegalStateException();

        return items[--count];
    }

    public void push(int item) {

        
        if (count == items.length)
            throw new StackOverflowError();

        items[count++] = item;
    }


}
