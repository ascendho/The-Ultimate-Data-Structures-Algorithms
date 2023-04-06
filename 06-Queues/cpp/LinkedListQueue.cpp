#include "LinkedListQueue.h"

Node::Node(int value) {
    this->value = value;
}

LinkedListQueue::LinkedListQueue() {
    head = nullptr;
    tail = nullptr;
    count = 0;
}


void LinkedListQueue::enqueue(int item) {
    Node *node = new Node(item);

    if (isEmpty())
        head = tail = node;
    else {
        tail->next = node;
        tail = node;
    }

    count++;

}

int LinkedListQueue::dequeue() {
    if (isEmpty())
        throw "queue is empty";

    int ret = head->value;

    if (head == tail)
        head = tail = nullptr;
    else {
        Node *second = head->next;
        head->next = nullptr;
        head = second;
    }

    count--;

    return ret;
}

int LinkedListQueue::peek() {
    if (isEmpty())
        throw "Queue is empty";

    return head->value;
}

int LinkedListQueue::size() const {
    return count;
}

bool LinkedListQueue::isEmpty() {
    return nullptr == head;
}

string LinkedListQueue::toString() {

    string str = "[";
    Node *current = head;
    while (nullptr != current) {
        if (current->next == nullptr)
            str += std::to_string(current->value);
        else
            str += std::to_string(current->value) + ",";
        current = current->next;
    }

    str += "]";

    return str;
}

