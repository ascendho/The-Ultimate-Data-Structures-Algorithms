#include "LinkedList.h"

Node::Node(int value) {
    this->value = value;
    this->next = nullptr;
}

bool LinkedList::isEmpty() {
    return first == nullptr;
}

LinkedList::LinkedList() {
    first = last = nullptr;
}

void LinkedList::addFirst(int item) {
    Node *node = new Node(item);
    if (isEmpty())
        first = last = node;
    else {
        node->next = first;
        first = node;
    }
}

void LinkedList::addLast(int item) {
    Node *node = new Node(item);
    if (isEmpty())
        first = last = node;
    else {
        last->next = node;
        last = node;
    }
}

int LinkedList::indexOf(int item) {
    Node *current = first;
    int index = 0;

    while (current != nullptr) {
        if (current->value == item)return index;
        current = current->next;
        index++;
    }
    return -1;
}

bool LinkedList::contains(int item) {
    return indexOf(item) != -1;
}
