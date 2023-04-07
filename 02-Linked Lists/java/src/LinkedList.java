import java.util.NoSuchElementException;

public class LinkedList {
    private class Node {
        private final int value;
        private Node next;

        public Node(int value) {
            this.value = value;
        }

    }

    private Node first;
    private Node last;
    private int size;

    private boolean isEmpty() {
        return first == null;
    }

    public void addFirst(int item) {
        var node = new Node(item);
        if (isEmpty())
            first = last = node;
        else {
            node.next = first;
            first = node;
        }
        size++;
    }

    public void addLast(int item) {
        var node = new Node(item);
        if (isEmpty())
            first = last = node;
        else {
            last.next = node;
            last = node;
        }
        size++;
    }

    public int indexOf(int item) {
        var current = first;
        int index = 0;

        while (current != null) {
            if (current.value == item) return index;
            current = current.next;
            index++;
        }

        return -1;
    }

    public boolean contains(int item) {
        return indexOf(item) != -1;
    }

    public void removeFirst() {
        if (isEmpty())
            throw new NoSuchElementException();

        if (first == last)
            first = last = null;
        else {
            var second = first.next;
            first.next = null;
            first = second;
        }
        size--;

    }

    public void removeLast() {
        if (isEmpty())
            throw new NoSuchElementException();

        if (first == last)
            first = last = null;
        else {
            last = getPrevious(last);
            last.next = null;
        }
        size--;
    }

    private Node getPrevious(Node node) {
        var current = first;
        while (current != null) {
            if (current.next == node) return current;
            current = current.next;
        }
        return null;
    }

    public int size() {
        return size;
    }

    public int[] toArray() {
        int[] array = new int[size];
        var current = first;
        var index = 0;
        while (current != null) {
            array[index++] = current.value;
            current = current.next;
        }
        return array;
    }

    public void reverse() {
        if (isEmpty())
            return;

        var prev = first;
        var curr = first.next;

        while (curr != null) {
            var next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }

        last = first;
        last.next = null;
        first = prev;
    }

    public int getKthFromTheEnd(int k) {
        if (isEmpty())
            throw new IllegalStateException();

        var head = first;
        var second = first;

        for (int i = 0; i < k - 1; i++) {
            second = second.next;

            // k is too large
            if (null == second)
                throw new IllegalArgumentException();
        }

        while (second != last) {
            head = head.next;
            second = second.next;
        }

        return head.value;
    }

    // My custom method
    public Node getKthNodeFromTheEnd(int k) {
        if (isEmpty())
            throw new IllegalStateException();

        var head = first;
        Node node = null;

        int order = size - k + 1;

        while (order > 0) {
            node = head;
            head = head.next;
            order--;
        }
        return node;
    }

    public void printMiddle() {
        if (isEmpty())
            throw new IllegalStateException();

        var head = first;
        var tail = first;
        while (tail != last && tail.next != last) {
            tail = tail.next.next;
            first = first.next;
        }
        if (tail == last)
            System.out.println(first.value);
        else
            System.out.println(first.value + "," + first.next.value);

    }

    public boolean hasLoop() {
        var fast = first;
        var slow = first;

        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;

            if (fast == slow)
                return true;
        }
        return false;
    }

    public static LinkedList createWithLoop() {
        var list = new LinkedList();
        list.addLast(10);
        list.addLast(20);
        list.addLast(30);

        // Get a reference to 30
        var node = list.last;

        list.addLast(40);
        list.addLast(50);

        // Create the loop
        list.last.next = node;

        return list;
    }
}
