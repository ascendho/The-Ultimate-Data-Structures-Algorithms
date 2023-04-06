#ifndef CPP_STACKWITHTWOQUEUES_H
#define CPP_STACKWITHTWOQUEUES_H

#include<queue>
#include<string>

using namespace std;

class StackWithTwoQueues {

private:
    queue<int> queue1;
    queue<int> queue2;
    int top;

public:
    StackWithTwoQueues();

    void push(int);

    int pop();

    void swapQueues();

    bool isEmpty();

    int size();

    int peek();

    string toString();


};


#endif //CPP_STACKWITHTWOQUEUES_H
