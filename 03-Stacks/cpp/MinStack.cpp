#include "MinStack.h"

void MinStack::push(int item) {
    st.push(item);
    if (minStack.empty())
        minStack.push(item);
    else if (minStack.top() > item)
        minStack.push(item);

}

int MinStack::pop() {
    if (st.empty())
        throw "stack is empty!";

    int top = st.top();
    st.pop();

    if (top == minStack.top())
        minStack.pop();

    return top;
}

int MinStack::min() {
    return minStack.top();
}


