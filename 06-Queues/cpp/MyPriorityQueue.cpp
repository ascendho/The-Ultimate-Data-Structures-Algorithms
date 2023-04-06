#include "MyPriorityQueue.h"

using namespace std;

MyPriorityQueue::MyPriorityQueue(int size) {
    items = new int[size];
    length = size;
    count = 0;
}

int MyPriorityQueue::shiftItemsToInsert(int item) {
    int i;
    for (i = count - 1; i >= 0; i--) {
        if (items[i] > item)
            items[i + 1] = items[i];
        else
            break;
    }

    return i + 1;
}

void MyPriorityQueue::add(int item) {
    if (isFull())
        throw "Queue is full!";
    int i = shiftItemsToInsert(item);
    items[i] = item;
    count++;
}

int MyPriorityQueue::remove() {
    if (isEmpty())
        throw "Queue is empty";

    return items[--count];
}

bool MyPriorityQueue::isEmpty() {
    return 0 == count;
}

bool MyPriorityQueue::isFull() {
    return length == count;
}

string MyPriorityQueue::toString() {
    string str = "[";
    for (int i = 0; i < length; i++) {
        if (length - 1 == i)
            str += to_string(items[i]);
        else
            str += to_string(items[i]) + ",";

    }
    return str + "]";
}

