#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include "ArrayQueue.h"

using namespace std;

void myReverse(queue<int> &);

int main() {
//    built-in queue

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

//    while (!q.empty()) {
//        cout << q.front() << endl;
//        q.pop();
//    }

//    myReverse

    myReverse(q);
    cout << "After myReverse..." << endl;
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

//    Custom ArrayQueue
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