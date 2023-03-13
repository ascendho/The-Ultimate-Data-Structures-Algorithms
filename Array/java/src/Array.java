public class Array {
    public int[] items;
    public int count;

    public Array(int length) {
        items = new int[length];
    }

    public void print() {
        for (int i = 0; i < count; i++)
            System.out.println(items[i]);
    }

}
