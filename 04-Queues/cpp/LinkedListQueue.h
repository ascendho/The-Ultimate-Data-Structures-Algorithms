#ifndef CPP_LINKEDLISTQUEUE_H
#define CPP_LINKEDLISTQUEUE_H

#include<string>

using namespace std;

struct Node {
public:
    int value;
    Node *next{};

    explicit Node(int);

};

class LinkedListQueue {
private:
    Node *head;
    Node *tail;
    int count;

public:
    LinkedListQueue();

    void enqueue(int);

    int dequeue();

    int peek();

    int size() const;

    bool isEmpty();

    string toString();

};


#endif //CPP_LINKEDLISTQUEUE_H
