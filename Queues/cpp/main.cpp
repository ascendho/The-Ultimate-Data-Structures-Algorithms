#include <iostream>
#include <queue>

using namespace std;

int main() {
//    built-in queue

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}
