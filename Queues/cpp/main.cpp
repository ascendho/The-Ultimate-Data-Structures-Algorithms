#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void myReverse(queue<int>&);

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

    myReverse(q);
    cout << "After myReverse..." << endl;
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}

void myReverse(queue<int>& queue) {
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