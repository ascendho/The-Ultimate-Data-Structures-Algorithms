#include "myStack.h"

myStack::myStack(int length) {
    this->length = length;
    items = new int[length];
    count = 0;
}

void myStack::push(int item) {
    if (count == length)
        return;
    items[count++] = item;
}

int myStack::pop() {
    if (0 == count)
        exit(EXIT_FAILURE);
    return items[--count];
}

int myStack::peek() {
    if (0 == count)
        exit(EXIT_FAILURE);
    return items[count - 1];
}

bool myStack::isEmpty() {
    return 0 == count;
}

