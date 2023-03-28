#include "TwoStacks.h"

TwoStacks::TwoStacks(int capacity) {
    if (capacity <= 0)
        throw "capacity must be 1 or greater";

    items = new int[capacity];
    top1 = -1;
    top2 = capacity;
    length = capacity;
}

void TwoStacks::push1(int item) {
    if (isFull1())
        return;
    items[++top1] = item;

}

void TwoStacks::push2(int item) {
    if (isFull2())
        return;

    items[--top2] = item;
}

int TwoStacks::pop1() {
    if (isEmpty1())
        throw "Stack is empty!";
    return items[top1--];
}

int TwoStacks::pop2() {
    if (isEmpty2())
        throw "Stack is empty!";
    return items[top2++];
}

bool TwoStacks::isEmpty1() const {
    return -1 == top1;
}

bool TwoStacks::isEmpty2() const {
    return length == top2;
}

bool TwoStacks::isFull1() const {
    return top1 + 1 == top2;

}

bool TwoStacks::isFull2() const {
    return top2 - 1 == top1;
}



