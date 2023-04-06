#include "QueueReverser.h"
#include <stack>

void QueueReverser::reverse(queue<int> &queue, int k) {
    if (k < 0 || k > queue.size())
        throw "k is invalid";

    stack<int> st;
    for (int i = 0; i < k; i++) {
        st.push(queue.front());
        queue.pop();
    }

    while (!st.empty()) {
        queue.push(st.top());
        st.pop();
    }

    for (int i = 0; i < queue.size() - k; i++) {
        queue.push(queue.front());
        queue.pop();
    }


}
