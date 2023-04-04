#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include "ArrayQueue.h"
#include "QueueWithTwoStacks.h"

using namespace std;

void myReverse(queue<int> &);

int main() {
//    built-in queue
    cout << "built-in queue" << endl;
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "--------" << endl;

//    while (!q.empty()) {
//        cout << q.front() << endl;
//        q.pop();
//    }

//    myReverse
    cout << "myReverse" << endl;

    myReverse(q);
    cout << "After myReverse..." << endl;
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
    cout << "--------" << endl;

//    Custom ArrayQueue

    cout << "Custom ArrayQueue" << endl;

    ArrayQueue arrayQueue(5);
    arrayQueue.enqueue(5);
    arrayQueue.enqueue(6);
    arrayQueue.enqueue(7);
    arrayQueue.enqueue(8);
    arrayQueue.enqueue(9);

    cout << arrayQueue.toString() << endl;
    cout << arrayQueue.dequeue() << endl;
    cout << arrayQueue.toString() << endl;
    arrayQueue.enqueue(10);
    cout << arrayQueue.toString() << endl;

    cout << "--------" << endl;

//    QueueWithTwoStacks

    cout << "QueueWithTwoStacks" << endl;

    QueueWithTwoStacks queueWithTwoStacks;
    queueWithTwoStacks.enqueue(10);
    queueWithTwoStacks.enqueue(20);
    queueWithTwoStacks.enqueue(30);

    cout << queueWithTwoStacks.peek() << endl;
    cout << queueWithTwoStacks.dequeue() << endl;
    cout << queueWithTwoStacks.dequeue() << endl;
    cout << queueWithTwoStacks.dequeue() << endl;
    cout << "--------" << endl;


    return 0;
}

void myReverse(queue<int> &queue) {
    stack<int> st;
    while (!queue.empty()) {
        st.push(queue.front());
        queue.pop();
    }
    while (!st.empty()) {
        queue.push(st.top());
        st.pop();
    }

}