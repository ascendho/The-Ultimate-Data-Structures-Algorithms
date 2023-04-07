#ifndef CPP_MYSTACK_H
#define CPP_MYSTACK_H

#include <string>

using namespace std;

class myStack {
private:
    int *items;
    int count;
    int length;

public:
    explicit myStack(int length);

    void push(int item);

    int pop();

    int peek();

    bool isEmpty() const;
};


#endif //CPP_MYSTACK_H
