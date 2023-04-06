#include "ArrayQueue.h"
#include <string>
#include <iostream>

using namespace std;

ArrayQueue::ArrayQueue(int capacity) {
    items = new int[capacity];
    this->length = capacity;
    this->front = 0;
    this->rear = 0;
    this->count = 0;

}

void ArrayQueue::enqueue(int item) {
    if (isFull())
        throw "Queue is full";
    items[rear] = item;
    rear = (rear + 1) % length;
    count++;
}

int ArrayQueue::dequeue() {
    if (isEmpty())
        throw "Queue is empty";
    int item = items[front];
    items[front] = 0;
    front = (front + 1) % length;
    count--;

    return item;
}

int ArrayQueue::peek() {
    if (isEmpty())
        throw "Queue is empty";
    return items[front];
}

bool ArrayQueue::isEmpty() const {
    return 0 == count;
}

bool ArrayQueue::isFull() const {
    return length == count;
}

string ArrayQueue::toString() {
    string s = "[";
    for (int i = 0; i < length; i++) {
        s += to_string(items[i]);
        if (i != length - 1)
            s += ",";
    }
    s += "]";
    return s;
}
