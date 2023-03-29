#ifndef CPP_ARRAYQUEUE_H
#define CPP_ARRAYQUEUE_H

#include <string>

using namespace std;

class ArrayQueue {
private:
    int front;
    int rear;
    int count;
    int length;
    int *items;

public:
    explicit ArrayQueue(int);

    void enqueue(int);

    int dequeue();

    int peek();

    bool isEmpty() const;

    bool isFull() const;

    string toString();
};


#endif //CPP_ARRAYQUEUE_H
