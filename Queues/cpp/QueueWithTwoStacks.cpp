#include "QueueWithTwoStacks.h"

bool QueueWithTwoStacks::isEmpty() {
    return inputStack.empty() && outputStack.empty();
}

void QueueWithTwoStacks::enqueue(int item) {
    inputStack.push(item);
}

int QueueWithTwoStacks::dequeue() {
    MoveinputStackTooutputStack();

    int ret = outputStack.top();
    outputStack.pop();
    return ret;
}

void QueueWithTwoStacks::MoveinputStackTooutputStack() {
    if (isEmpty())
        throw "Queue is empty";

    if (outputStack.empty())
        while (!inputStack.empty()) {
            outputStack.push(inputStack.top());
            inputStack.pop();
        }
}

int QueueWithTwoStacks::peek() {
    MoveinputStackTooutputStack();
    return outputStack.top();
}
