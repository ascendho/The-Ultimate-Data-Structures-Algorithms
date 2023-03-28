public class ArrayQueue {
    private int front;
    private int rear;
    private int count;
    private final int[] items;

    public ArrayQueue(int capacity) {
        items = new int[capacity];
    }


    void enqueue(int item) {

        items[rear++] = item;
        count++;

    }

    int dequeue() {
        int item = items[front];
        items[front++] = 0;
        return item;
    }




}
