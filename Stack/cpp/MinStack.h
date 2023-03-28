#ifndef CPP_MINSTACK_H
#define CPP_MINSTACK_H

#include <stack>

using namespace std;

class MinStack {
private:
    stack<int> st;
    stack<int> minStack;

public:
    void push(int);

    int pop();

    int min();
};


#endif //CPP_MINSTACK_H
