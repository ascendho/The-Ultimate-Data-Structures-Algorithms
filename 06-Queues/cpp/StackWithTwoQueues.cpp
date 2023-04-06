#include "StackWithTwoQueues.h"

StackWithTwoQueues::StackWithTwoQueues() {
    top = 0;
}

void StackWithTwoQueues::push(int item) {
    queue1.push(item);
    top = item;
}

int StackWithTwoQueues::pop() {
    if (isEmpty())
        throw "stack is empty";

    while (queue1.size() > 1) {
        top = queue1.front();
        queue1.pop();
        queue2.push(top);
    }

    swapQueues();

    int ret = queue2.front();
    queue2.pop();

    return ret;
}

void StackWithTwoQueues::swapQueues() {
    auto temp = queue1;
    queue1 = queue2;
    queue2 = temp;
}

bool StackWithTwoQueues::isEmpty() {
    return queue1.empty();
}

int StackWithTwoQueues::size() {
    return queue1.size();
}

int StackWithTwoQueues::peek() {
    if (isEmpty())
        throw "stack is empty";

    return top;
}

string StackWithTwoQueues::toString() {
    string str = "[";
    while (!queue1.empty()) {
        if (1 == queue1.size())
            str += std::to_string(queue1.front());
        else
            str += std::to_string(queue1.front()) + ",";
        queue1.pop();
    }

    str += "]";

    return str;
}
