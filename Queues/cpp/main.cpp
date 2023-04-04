#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include "ArrayQueue.h"
#include "QueueWithTwoStacks.h"
#include "MyPriorityQueue.h"

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

//    built-in priority queue

    cout << "built-in priority queue" << endl;
    priority_queue<int, vector<int>, greater<int>> priorityQueue;
    priorityQueue.push(7);
    priorityQueue.push(5);
    priorityQueue.push(15);
    priorityQueue.push(25);
    while (!priorityQueue.empty()) {
        cout << priorityQueue.top() << endl;
        priorityQueue.pop();
    };

    cout << "--------" << endl;

//    custom priority queue
    cout << "custom priority queue" << endl;

    MyPriorityQueue myPriorityQueue(5);
    myPriorityQueue.add(3);
    myPriorityQueue.add(7);
    myPriorityQueue.add(5);
    myPriorityQueue.add(1);
    myPriorityQueue.add(4);

    cout << myPriorityQueue.toString() << endl;

    while (!myPriorityQueue.isEmpty())
        cout << myPriorityQueue.remove() << endl;

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