#ifndef CPP_QUEUEWITHTWOSTACKS_H
#define CPP_QUEUEWITHTWOSTACKS_H

#include <stack>

using namespace std;

class QueueWithTwoStacks {

private:
    stack<int> inputStack;
    stack<int> outputStack;

public:

    bool isEmpty();

    void enqueue(int);

    int dequeue();

    int peek();


    void MoveinputStackTooutputStack();
};


#endif //CPP_QUEUEWITHTWOSTACKS_H
