#include "LinkedList.h"
#include <cstdlib>

Node::Node(int value) {
    this->value = value;
    this->next = nullptr;
}

bool LinkedList::isEmpty() {
    return first == nullptr;
}

Node *LinkedList::getPrevious(Node *node) {
    Node *current = first;
    while (current != nullptr) {
        if (current->next == node)return current;
        current = current->next;
    }
    return nullptr;

}

LinkedList::LinkedList() {
    first = last = nullptr;
    size = 0;
}

void LinkedList::addFirst(int item) {
    Node *node = new Node(item);
    if (isEmpty())
        first = last = node;
    else {
        node->next = first;
        first = node;
    }
    size++;
}

void LinkedList::addLast(int item) {
    Node *node = new Node(item);
    if (isEmpty())
        first = last = node;
    else {
        last->next = node;
        last = node;
    }
    size++;
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


void LinkedList::removeFirst() {
    if (isEmpty())
        return;
    if (first == last)
        first = last = nullptr;
    else {
        Node *second = first->next;
        first->next = nullptr;
        first = second;
    }
    size--;
}

void LinkedList::removeLast() {
    if (isEmpty())
        return;
    if (first == last)
        first = last = nullptr;
    else {
        Node *prev = getPrevious(last);
        last = prev;
        last->next = nullptr;
    }
    size--;
}

int LinkedList::Size() {
    return size;
}

int *LinkedList::toArray() {
    int *array = new int[size];
    Node *current = first;
    int index = 0;
    while (current != nullptr) {
        array[index++] = current->value;
        current = current->next;
    }
    return array;
}

void LinkedList::reverse() {
    if (isEmpty())
        return;

    Node *prev = first;
    Node *curr = first->next;

    while (curr) {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    last = first;
    last->next = nullptr;
    first = prev;

}

int LinkedList::getKthFromTheEnd(int k) {
    if (isEmpty())
        exit(EXIT_FAILURE);

    Node *head = first;
    Node *second = first;

    for (int i = 0; i > k - 1; i++) {
        second = second->next;

        // k is too large
        if (nullptr == second)
            exit(EXIT_FAILURE);
    }

    while (second != last) {
        head = head->next;
        second = second->next;
    }

    return head->value;
}

// My custom method
Node *LinkedList::getKthNodeFromTheEnd(int k) {
    if (isEmpty())
        exit(EXIT_FAILURE);

    Node *head = first;
    Node *node = nullptr;

    int order = size - k + 1;

    while (order > 0) {
        node = head;
        head = head->next;
        order--;
    }

    return node;
}